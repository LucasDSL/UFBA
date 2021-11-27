#include <stdio.h>
#include "shell.h"

void r_type(uint32_t cur_inst){
	uint32_t rs = (cur_inst & 0x03e00000) >> 21;
	uint32_t rt = (cur_inst & 0x001f0000) >> 16;
	uint32_t rd = (cur_inst & 0x0000f800) >> 11;
	uint32_t shamt = (cur_inst & 0x000007c0) >> 6;
	uint32_t funct = cur_inst & 0x0000003f;
  // Numeros nos endereÃ§os rs rt com sinal
  //uint32_t temp1 = mem_read_32(CURRENT_STATE.REGS[rs]);
  //uint32_t temp2 = mem_read_32(CURRENT_STATE.REGS[rt]);
  uint32_t temp1 = CURRENT_STATE.REGS[rs];
  uint32_t temp2 = CURRENT_STATE.REGS[rt];
  printf("funct: %x\n", funct);
  printf("rs: 0x%x\n", rs);
  printf("rt: 0x%x\n", rt);
  printf("rd: 0x%x\n", rd);
  printf("shamt: 0x%x\n", shamt);
  // Quantidade shift
  int shamt_number = (int) shamt;
  switch(funct){
    case 0x00000000:; // sll - shift left logical 
      printf("Sll - shift left logical\n");
      uint32_t temp2_sl = temp2 << shamt_number;
      NEXT_STATE.REGS[rd] = temp2_sl;
      break;
    case 0x00000002:; // srl - shift right logical 
      printf("Srl - shift right logical\n");
      uint32_t temp2_sr = temp2 >> shamt_number;
      NEXT_STATE.REGS[rd] = temp2_sr;
      break;
    case 0x00000003:; // sra - shift right arithmetic 
      printf("Sra - shift right arithmetic\n");
      uint32_t temp2_sra = ((int32_t)temp2) >> shamt_number;
      NEXT_STATE.REGS[rd] = temp2_sra;
      break;
    case 0x00000004:; // sllv - shift left logical variable
      printf("Sllv - shift left logical variable\n");
      uint32_t temp2_sllv = temp2 << temp1;
      NEXT_STATE.REGS[rd] = temp2_sllv;
      break;
    case 0x00000006:; // srlv - shift right logical variable
      printf("Srlv - shift right logical variable\n");
      uint32_t temp2_srlv = temp2 >> temp1;
      NEXT_STATE.REGS[rd] = temp2_srlv;
      break;
    case 0x00000007:; // srav - shift right arithmetic variable
      printf("Srav - shift right arithmetic variable\n");
      uint32_t temp2_srav = temp2 >> (int32_t)temp1;
      NEXT_STATE.REGS[rd] = temp2_srav;
      break;
    case 0x00000008:; // jr - jump register
      printf("Jump register\n");
      CURRENT_STATE.PC = temp1 - 4;
      break;
    case 0x00000009:; // jalr - jump and link register
      printf("Jump and link register\n");
      if(rd == 0x00000000){
        NEXT_STATE.REGS[31] = CURRENT_STATE.PC + 4;
      }
      else{
        NEXT_STATE.REGS[rd] = CURRENT_STATE.PC + 4;
      }
      if((temp1 & 0x00000003) == 0){
        CURRENT_STATE.PC = temp1 - 4;
      }
      else{
        printf("Address Exception\n");
      }
      break;
    case 0x000000010:; // mfhi
      printf("Move from high\n");
      NEXT_STATE.REGS[rd] = NEXT_STATE.HI;
      break;
    case 0x000000011:; // mthi
      printf("Move to high\n");
      NEXT_STATE.HI = NEXT_STATE.REGS[rs];
      break;
    case 0x000000012:; // mflo
      printf("Move fromo low\n");
      NEXT_STATE.REGS[rd] = NEXT_STATE.LO;
      break;
    case 0x000000013:; // mfto
      printf("Move to low\n");
      NEXT_STATE.LO = NEXT_STATE.REGS[rs];
      break;
    case 0x00000018:; // mult 
    //eu fiz essa e a multu mas to bem na duvida, no manual fala de um shift 32 mas aqui não rola pelo tamanho de NEXT_STATE.HI 
      printf("Funct - mult\n");
      int32_t value_mult = (int32_t)temp1 * (int32_t)temp2;
      NEXT_STATE.HI = value_mult >> 16;
      NEXT_STATE.LO = (value_mult << 16) >> 16;
      break;
    case 0x00000019:; // multu 
      printf("Funct - multu\n");
      uint32_t value_multu = temp1 * temp2;
      NEXT_STATE.HI = value_multu >> 16;
      NEXT_STATE.LO = (value_multu << 16) >> 16;
      break;
    case 0x00000001a:; // div - divide
      printf("Divide\n");
      if(temp2 != 0){
        NEXT_STATE.HI = (int32_t)temp1%temp2;
        NEXT_STATE.LO = (int32_t)temp1/temp2;
      }
      break;
    case 0x00000001b:; // divu - divide unsigned
      printf("Divide unsigned\n");
      if(temp2 != 0){
        NEXT_STATE.HI = temp1%temp2;
        NEXT_STATE.LO = temp1/temp2;
      }
      break;
    case 0x00000020:; // add 
      printf("Funct - add\n");
      int32_t value_add = (int32_t)temp1 + (int32_t)temp2;
      NEXT_STATE.REGS[rd] = value_add;
      break;
    case 0x00000021:; // addu - add unsigned  
      printf("Funct - addu\n");
      uint32_t value_addu = temp1 + temp2;
      NEXT_STATE.REGS[rd] = value_addu;
      break;
    case 0x00000022:; // sub - subtract
      printf("Funct - sub\n");
      int32_t value_sub = (int32_t)temp1 - (int32_t)temp2;
      NEXT_STATE.REGS[rd] = value_sub;
      break;
    case 0x00000023:; // subu - subtraction unsgined 
      printf("Funct - subu\n");
      uint32_t value_subu = temp1 - temp2;
      NEXT_STATE.REGS[rd] = value_subu;
      break;
    case (0x00000024):; // and 
      printf("Funct - and\n");
      uint32_t result_and = temp1 & temp2;
      NEXT_STATE.REGS[rd] = result_and;
      break;
    case 0x00000025:; // or
      printf("Funct - or\n");
      uint32_t result_or = temp1 | temp2;
      NEXT_STATE.REGS[rd] = result_or;
      break;
    case 0x00000026:; // xor
      printf("Funct - xor\n");
      uint32_t result_xor = temp1 ^ temp2;
      NEXT_STATE.REGS[rd] = result_xor;
      break;
    case 0x00000027:; // nor 
      printf("Funct - nor\n");
      uint32_t result_nor = ~(temp1 | temp2);
      NEXT_STATE.REGS[rd] = result_nor;
      break;
    case 0x0000002a:; // slt - set  less than 
      printf("Funct - slt\n"); 
      int32_t result_slt = (int32_t)temp1 < (int32_t)temp2 ? 0x1 : 0x0;
      NEXT_STATE.REGS[rd] = result_slt;
      break;
    case 0x0000002b:; // sltu - set less than unsigned
      printf("Funct - sltu\n"); 
      uint32_t result_sltu = temp1 < temp2 ? 0x1 : 0x0;
      NEXT_STATE.REGS[rd] = result_sltu;
      break;
    default: 
      return;
  }
}

void i_type(uint32_t cur_inst, uint32_t opcode){
	uint32_t rs = (cur_inst & 0x03e00000) >> 21;
	uint32_t rt = (cur_inst & 0x001f0000) >> 16;
	int32_t immediate = cur_inst & 0x0000ffff;
  int32_t sign_ext_imm;
  if((immediate & 0x00008000) == 0x00008000){
    sign_ext_imm = 0xffff0000 | immediate;
  }else{
    sign_ext_imm = immediate;
  }
  // Number rs
  int32_t temp1 = CURRENT_STATE.REGS[rs];
  printf("op: %x\n", opcode);
  printf("rs: 0x%x\n", rs);
  printf("rt: 0x%x\n", rt);
  printf("imme: 0x%x\n", immediate);
  switch(opcode){
    case 0x00000001:; // pseudos
    int32_t ps = CURRENT_STATE.REGS[rs];
      if(rt == 0x00000000){
        //bltz
        printf("BLTZ\n");
        if(ps < 0x00000000){
          uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
          CURRENT_STATE.PC = temp3;
        }        
      }else if(rt == 0x00000010){
        //bltzal
        printf("BLTZAL\n");
        if(ps < 0x00000000){
          NEXT_STATE.REGS[31] = CURRENT_STATE.PC + 4;
          uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
          CURRENT_STATE.PC = temp3;
        }        
      }else if(rt == 0x00000001){
        //bgez
        printf("BGEZ\n");
        if(ps >= 0x00000000){
          uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
    	    CURRENT_STATE.PC = temp3;
        }
      }else if(rt == 0x00000011){
        //bgezal
        printf("BGEZAL\n");
        NEXT_STATE.REGS[31] = CURRENT_STATE.PC + 4;
        if(ps >= 0x00000000){
          uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
      	  CURRENT_STATE.PC = temp3;
        }
      }
      break;
    case 0x00000004:; // beq
      uint32_t tempbeq = CURRENT_STATE.REGS[rt];
      printf("BEQ\n");
      //atualizei o valor de current aqui pra nÃ£o ter que reescrever o final que soma + 4
      if(temp1 == tempbeq){
        uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
        CURRENT_STATE.PC = temp3;
      }
      break;
    case 0x00000005:; // bne
      uint32_t tempbne = CURRENT_STATE.REGS[rt];
      printf("BNE\n");
      //atualizei o valor de current aqui pra nÃ£o ter que reescrever o final que soma + 4
      if(temp1 != tempbne){
        uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
        CURRENT_STATE.PC = temp3;
      }
      break;
    case 0x00000006:; // blez
      //atualizei o valor de current aqui pra nÃ£o ter que reescrever o final que soma + 4
      printf("BLEZ\n");
      if((int32_t)temp1 <= 0x00000000){
        uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
        CURRENT_STATE.PC = temp3;
      }
      break;
    case 0x00000007:; // bgtz
      printf("BGTZ\n");
      //atualizei o valor de current aqui pra nÃ£o ter que reescrever o final que soma + 4
      if((int32_t)temp1 > 0x00000000){
        uint32_t temp3 = CURRENT_STATE.PC + (sign_ext_imm << 2);
        CURRENT_STATE.PC = temp3;
      }
      break;
    case 0x00000008:; // addi
      int32_t result_addi = (int32_t) temp1 + sign_ext_imm;
      NEXT_STATE.REGS[rt] = result_addi;
      break;
    case 0x00000009:; // addiu - add immediate unsigned 
    //aqui seria sign extended tambÃ©m? tÃ¡ no manual
      uint32_t result_addiu = temp1 + sign_ext_imm;
      NEXT_STATE.REGS[rt] = result_addiu;
      break;
    case 0x0000000a:; // slti - set  less than immediate 
      printf("Funct - slti\n"); 
      int32_t result_slti = (int32_t)temp1 < sign_ext_imm ? 0x1 : 0x0;
      NEXT_STATE.REGS[rt] = result_slti;
      break;
    case 0x0000000b:; // sltiu - set  less than immediate unsigned
    //aqui seria sign extended tambÃ©m? tÃ¡ no manual
      printf("Funct - sltiu\n"); 
      int32_t result_sltiu = temp1 < (uint32_t)immediate ? 0x1 : 0x0;
      NEXT_STATE.REGS[rt] = result_sltiu;
      break;
    case 0x0000000c:; // andi - and immediate
      printf("Funct - andi\n");
      uint32_t result_andi = temp1 & immediate;
      NEXT_STATE.REGS[rt] = result_andi;
      break;
    case 0x0000000d:; // ori - or immediate
      printf("Funct - ori\n");
      uint32_t result_ori = temp1 | immediate;
      NEXT_STATE.REGS[rt] = result_ori;
      break;
    case 0x0000000e:; // xori - xor immediate
      printf("Funct - xori\n");
      uint32_t result_xori = temp1 ^ immediate;
      NEXT_STATE.REGS[rt] = result_xori;
      break;
    case 0x0000000f:; // lui - Load upper immediate
      printf("Funct - lui\n");
      NEXT_STATE.REGS[rt] = (immediate << 16);
      break;
    case 0x00000020:; // lb - Load byte 
      printf("Funct - lb\n");
      NEXT_STATE.REGS[rt] = (int8_t) mem_read_32(CURRENT_STATE.REGS[rs] + sign_ext_imm);
      break;
    case 0x00000021:; // lh - Load halfword 
      printf("Funct - lh\n");
      NEXT_STATE.REGS[rt] = (int16_t)mem_read_32(CURRENT_STATE.REGS[rs] + sign_ext_imm);
      break;
    case 0x00000023:; // lw - Load Word
      printf("Funct - lw\n");
      NEXT_STATE.REGS[rt] = mem_read_32(temp1 + sign_ext_imm);
      break;
    case 0x00000024:; // lbu - Load byte unsigned 
      printf("Funct - lb\n");
      NEXT_STATE.REGS[rt] = (uint8_t)mem_read_32(CURRENT_STATE.REGS[rs] + sign_ext_imm);
      break;
    case 0x00000025:; // lhu
      printf("Funct - lhu\n");
      NEXT_STATE.REGS[rt] = (uint16_t)mem_read_32(CURRENT_STATE.REGS[rs] + sign_ext_imm);
      break;
    case 0x00000028:; // sb - store byte
      printf("Funct - sb\n");
      mem_write_32(CURRENT_STATE.REGS[rs] + (sign_ext_imm), (int8_t)NEXT_STATE.REGS[rt]);
      break;
    case 0x00000029:; // sh- store halfword
      printf("Funct - sh\n");
      mem_write_32(CURRENT_STATE.REGS[rs] + sign_ext_imm, (int16_t) CURRENT_STATE.REGS[rt]);
      break;
    case 0x0000002b:; // sw - store word
      printf("Funct - sw\n");
      mem_write_32(CURRENT_STATE.REGS[rs] + sign_ext_imm, CURRENT_STATE.REGS[rt]);
      break;
    default:
      return;
  }
}

void process_instruction()
{
    printf("Aqui na funcao process_instruction\n");
    /* execute one instruction here. You should use CURRENT_STATE and modify
     * values in NEXT_STATE. You can call mem_read_32() and mem_write_32() to
     * access memory. */
    uint32_t cur_inst = mem_read_32(CURRENT_STATE.PC);
    uint32_t opcode = (cur_inst & 0xfc000000) >> 26;
    if(cur_inst == 0x0000000c){ // Syscall 
      if(CURRENT_STATE.REGS[2] == 0X0a){
        RUN_BIT = 0;
        NEXT_STATE.PC = CURRENT_STATE.PC + 4;
        return;
      }
    }
    if(opcode == 0x00000000){ //tipo R
		  printf("Tipo R - cur_inst = %x\n", opcode);
    	r_type(cur_inst);	
    }else if(opcode == 0x00000002){ //j
      printf("J - jump\n");
      uint32_t address = (cur_inst & 0x03ffffff) << 2;
      uint32_t mask = 0x3f000000;
      NEXT_STATE.PC = (CURRENT_STATE.PC & mask) | address;
      return;
    }else if(opcode == 0x00000003){ //jal
      printf("Jal - jump and link\n");
      uint32_t address = (cur_inst & 0x03ffffff) << 2;
      NEXT_STATE.REGS[31] = CURRENT_STATE.PC + 4;
      uint32_t mask = 0x3f000000;
      NEXT_STATE.PC = (CURRENT_STATE.PC & mask) | address;
      return;
    }else if(opcode == 0x00000010){//acho que esses nï¿½o fazem nada mas nï¿½o tenho certeza
      
    }else if(opcode == 0x00000011){
      
    }else if(opcode == 0x00000012){
		
    }else if(opcode == 0x00000013){
    
    }else{//tipo i
      i_type(cur_inst, opcode);	
    }
    NEXT_STATE.PC = CURRENT_STATE.PC + 4;
    return;
}