/*
 * This source file is part of ARK
 * For the latest info, see https://github.com/ArkNX
 *
 * Copyright (c) 2013-2020 ArkNX authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"),
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once

#include "base/AFPluginManager.hpp"
#include "proto/AFProtoCPP.hpp"
#include "bus/interface/AFIMsgModule.hpp"
#include "bus/interface/AFIBusModule.hpp"
#include "net/interface/AFINetServiceManagerModule.hpp"
#include "login/interface/AFILoginNetModule.hpp"

namespace ark {

class AFCLoginNetModule final : public AFILoginNetModule
{
    ARK_DECLARE_MODULE_FUNCTIONS
public:
    bool Init() override;
    bool PostInit() override;
    //bool PreUpdate() override;

protected:
    int StartServer();

    // void OnSocketClientEvent(const NetEventType event, const guid_t& conn_id, const std::string& ip,  bus_id_t bus_id);

    // void OnClientDisconnect(const guid_t& xClientID);
    // void OnClientConnected(const guid_t& xClientID);

private:
    // AFSmartPtrMap<guid_t, AFClientConnectionData> mmClientSessionData;

    AFIBusModule* m_pBusModule;
    AFINetServiceManagerModule* m_pNetServiceManagerModule;

    std::shared_ptr<AFINetServerService> m_pNetServer;
};

} // namespace ark