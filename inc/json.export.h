#ifndef JSON_EXPORT_H
#define JSON_EXPORT_H


#ifdef WIN
#ifdef  JSON_EXPORTS
#define JSON_EXPORT __declspec(dllexport)
#else
#define JSON_EXPORT __declspec(dllimport)
#endif
#else
#define JSON_EXPORT __attribute__((visibility("default")))
#endif
#endif