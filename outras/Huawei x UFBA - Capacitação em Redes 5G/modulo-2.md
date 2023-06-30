# 5G Network Architecture and Key Technologies 
## 2.1 5G Network Architecture
### 2.1.1 5G Networking Scenario
Even though 4G brought us better communication with other people, it's not sufficient 
to achieve requirements for industry users. 5G will coexist with 4G for a period of time, therefore 
3GPP defines two 5G networks architectures and several related options.

Currently, existing networks area mainly 4G networks, which works 
with 2 distinct steps, the mobile access networks and the 
mobile core network, the first processing mobile connection
and the second processing network services. 

#### NSA Networks: non-standalone 
> 4G and 5G base stations coexist 

|Option| Core Network (Control plane)|Control anchor|Base stations|Data split anchor|
|---|---|---|----|---|
|3x|4G|4G|4G|5G||
|4x|5G|5G|4G|5G||
|7x|5G|4G|4G|5G||


#### SA Networks: standalone
There are only 5G base stations and 5G core networks

|Option| Core Network (Control plane)|Control anchor|Base stations|Data split anchor|
|---|---|---|---|---|
|1|Pure 4G network| <- | <- | <- |
|2|Pure 5G network| <- | <- | <- |
|5|5G|x|4G|x|
|6|4G|x|5G|x|


### 2.1.2 5G Core Network Architecture
Formed by the Radio Access Network(RAN) and the core network itself.
RAN provides access to wireless terminals, such as telephones or computers, connecting them to the network for services, which are perfomed by the core network. 
#### Functions 
1. User management: Need to know wich UE access the network, if it have permissions(authorization), where is located(mobility management). Also connection management to connect calls of people or people trying to access the internet 
2. Service implementation: sometimes charging is needed(charging management), the service may involve different networks, specially if the services are from different places, where the service must provide different interface for each outside network connecting
#### Evolution of core network 
- First wave: evolution from 2G to 3G. Different from 2G, on
3G calls and internet access are processed circuit swith and process switch separately. In the circuit switch, the CP is separated from the UP. Also, on 3G transmissions are ip-based, whereas on 2G is based on the time division multiplexing(TDM).
- Second wave: evolution from 3G to 4G. 4G network is also called the evolved packet core (EPC), where there
are no more CS (circuit switch) domain, only the PS(packet switching) domain.
- Third wave: evolution from 4G to 5G. First of all, services are much more diversified and 5G powers industries. Based on cloud native architecture.