#include <EyerJNI/EyerJNIEnvManager.hpp>
#include "JNIPassiveCallback.hpp"

#include "EyerJNI/EyerJNI.hpp"
#include "EyerJNI/JNIHeader.hpp"

namespace Eyer
{
    JNIPassiveCallback::JNIPassiveCallback(jobject _jPassiveCallback)
    {
        jPassiveCallback = _jPassiveCallback;
    }

    int JNIPassiveCallback::UserRegister(EyerString _deviceId)
    {
        EyerLog("UserRegister UserRegister: %s\n", _deviceId.str);

        JNIEnv * env = EyerJNIEnvManager::GetInstance()->AttachCurrentThread();
        if(env == nullptr){
            return -1;
        }

        jclass classLoaderClass = env->GetObjectClass(jPassiveCallback);
        if(classLoaderClass == nullptr){
            EyerLog("GetObjectClass Fail\n");
            return - 1;
        }

        jmethodID jmethodId = env->GetMethodID(classLoaderClass, "UserRegister", "(Ljava/lang/String;)I");
        if(jmethodId == nullptr){
            EyerLog("GetMethodID Fail\n");
            return -1;
        }

        int ret = env->CallIntMethod(jPassiveCallback, jmethodId, env->NewStringUTF(_deviceId.str));

        EyerJNIEnvManager::GetInstance()->DetachCurrentThread();

        return ret;
    }

    int JNIPassiveCallback::DeviceHeart(Eyer::EyerString _deviceId)
    {
        JNIEnv * env = EyerJNIEnvManager::GetInstance()->AttachCurrentThread();
        if(env == nullptr){
            return -1;
        }

        jclass classLoaderClass = env->GetObjectClass(jPassiveCallback);
        if(classLoaderClass == nullptr){
            EyerLog("GetObjectClass Fail\n");
            return - 1;
        }

        jmethodID jmethodId = env->GetMethodID(classLoaderClass, "DeviceHeart", "(Ljava/lang/String;)I");
        if(jmethodId == nullptr){
            EyerLog("GetMethodID Fail\n");
            return -1;
        }

        EyerJNIEnvManager::GetInstance()->DetachCurrentThread();
        return 0;
    }
}