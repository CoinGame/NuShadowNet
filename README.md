
Nu Shadow Net Testing Playground
==================================

[![Join the chat at https://gitter.im/CoinGame/NuShadowNet](https://badges.gitter.im/CoinGame/NuShadowNet.svg)](https://gitter.im/CoinGame/NuShadowNet?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

This code is maintained for testing the Nu Network. Why not use the official testnet? There are many parameters changed which make it difficult to say for sure testing results will be reflected in the main net code. The goal of this repo is to provide the community a place to run through testing scenarios without having to expend any real value. Some key differences to note about this repo:

* Differences between the master branch here and the [official Nu repo](https://bitbucket.org/JordanLeePeershares/Nubit)  are only for the purpose of preventing NuShadowNet from interfering with existing clients. This means you will be able to compile and run Nu mainnet and Nu Shadownet at the same time. They will have separate ports, data directory, visual, and other cosmetic changes. This will effectively be a separate network, but protocol and functionality will follow the true mainnet.

* Voting will be centralized using a datafeed in the root of this repo. I will hold all pre-mined NuShares effectively allowing me to pass anything I want. I welcome anyone who would like to use this network for testing submit a pull request adding your motion, custodial grant (NSR/NBT), fees.

# Network Info

### Seed Node:

There are no hard coded seed IP addresses in the source. You must [create a nu.conf file](https://docs.nubits.com/creating-conf-file/) with an addnode to connect to the network. The seed IP for the shadow network is 178.62.58.236.

Sample nu.conf
```
rpcuser=randomusername
rpcpassword=randompassword
addnode=178.62.58.236
```

### Ports:

Port Type | Port Number  
-------- | --------  
Protocol port | 7891  
NuShares RPC port | 14010 
NuBits RPC port | 14011  
Testnet protocol port | 7896  
NuShares testnet RPC port | 15010  
NuBits testnet RPC port | 15011  
  
# Voting info

Submit pull requests to the voting file located [here](https://github.com/CoinGame/NuShadowTestnet/blob/nushadownet/shadownet.vote). If you would like to see en example of how to format the voting json a complete example is available [here](https://github.com/CoinGame/NuShadowTestnet/blob/nushadownet/sample.vote). Minting nodes in my possession will use the voting file as a datafeed, which will allow all votes to pass unanimously and quickly as possible.
  
# Repo Guidelines

* Developers work in their own forks, then submit pull requests when they think their feature or bug fix is ready.
