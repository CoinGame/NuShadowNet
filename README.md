
Nu Shadow Net Testing Playground
==================================

This code is maintained for testing the Nu Network. Why not use the official testnet? There are many parameters changed which make it difficult to say for sure testing results will be reflected in the main net code. The goal of this repo is to provide me (CoinGame) and place to run long term testing while also inviting community members to join the network. Some key differences to note about this code:

* Differences between the master branch here and the [official Nu repo](https://bitbucket.org/JordanLeePeershares/Nubit)  are only for the purpose of preventing NuShadowNet from interfering with existing clients. This means you will be able to compile and run Nu mainnet and Nu Shadownet at the same time. They will have separate ports, data directory, and other changes. This will effectively be a separate network.

* Voting will be centralized using a datafeed in the root of this repo. I will hold all pre-mined NuShares effectively allowing me to pass anything I want. I welcome anyone who would like to use this network for testing submit a pull request adding your motion, custodial grant (NSR/NBT), fees. The point of this repo is for everyone to test in a mainnet enviroment without any of the real costs that would occur using the actual mainnet. Let's get dirty.

# Repo Guidelines

* Developers work in their own forks, then submit pull requests when they think their feature or bug fix is ready.
