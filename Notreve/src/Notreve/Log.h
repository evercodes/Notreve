#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


namespace Notreve {

	class NOTREVE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

// Core log macros
#define NT_CORE_TRACE(...)    ::Notreve::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NT_CORE_INFO(...)     ::Notreve::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NT_CORE_WARN(...)     ::Notreve::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NT_CORE_ERROR(...)    ::Notreve::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NT_CORE_FATAL(...)    ::Notreve::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define NT_TRACE(...)         ::Notreve::Log::GetClientLogger() ->trace(__VA_ARGS__)
#define NT_INFO(...)          ::Notreve::Log::GetClientLogger() ->info(__VA_ARGS__)
#define NT_WARN(...)          ::Notreve::Log::GetClientLogger() ->warn(__VA_ARGS__)
#define NT_ERROR(...)         ::Notreve::Log::GetClientLogger() ->error(__VA_ARGS__)
#define NT_FATAL(...)         ::Notreve::Log::GetClientLogger() ->fatal(__VA_ARGS__)
