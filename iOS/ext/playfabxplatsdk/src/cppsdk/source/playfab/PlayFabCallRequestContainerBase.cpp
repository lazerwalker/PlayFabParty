#include <stdafx.h>

#include <playfab/PlayFabCallRequestContainer.h>

namespace PlayFabInternal
{
    CallRequestContainerBase::CallRequestContainerBase(
        std::string url,
        const std::unordered_map<std::string, std::string>& headers,
        std::string requestBody,
        CallRequestContainerCallback callback,
        void* customData,
        std::shared_ptr<PlayFabApiSettings> settings) :
        url(url),
        requestHeaders(headers),
        requestBody(requestBody),
        apiSettings(settings),
        callback(callback),
        customData(customData)
    {
    }

    std::string CallRequestContainerBase::GetUrl() const
    {
        return this->url;
    }

    std::unordered_map<std::string, std::string> CallRequestContainerBase::GetRequestHeaders() const
    {
        return this->requestHeaders;
    }

    std::string CallRequestContainerBase::GetRequestId() const
    {
        return this->requestId;
    }

    void CallRequestContainerBase::SetRequestId(std::string newRequestId)
    {
        this->requestId = newRequestId;
    }

    std::string CallRequestContainerBase::GetRequestBody() const
    {
        return this->requestBody;
    }

    std::shared_ptr<PlayFabApiSettings> CallRequestContainerBase::GetApiSettings() const
    {
        return this->apiSettings;
    }

    CallRequestContainerCallback CallRequestContainerBase::GetCallback() const
    {
        return this->callback;
    }

    void* CallRequestContainerBase::GetCustomData() const
    {
        return this->customData;
    }
}
