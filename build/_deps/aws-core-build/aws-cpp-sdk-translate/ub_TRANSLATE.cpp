// Unity Build generated by CMake
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/TranslateClient.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/TranslateEndpoint.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/TranslateErrorMarshaller.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/TranslateErrors.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/AppliedTerminology.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/CreateParallelDataRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/CreateParallelDataResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/DeleteParallelDataRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/DeleteParallelDataResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/DeleteTerminologyRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/DescribeTextTranslationJobRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/DescribeTextTranslationJobResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/DetectedLanguageLowConfidenceException.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/Directionality.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/EncryptionKey.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/EncryptionKeyType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/Formality.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/GetParallelDataRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/GetParallelDataResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/GetTerminologyRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/GetTerminologyResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ImportTerminologyRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ImportTerminologyResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/InputDataConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/JobDetails.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/JobStatus.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ListParallelDataRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ListParallelDataResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ListTerminologiesRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ListTerminologiesResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ListTextTranslationJobsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ListTextTranslationJobsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/MergeStrategy.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/OutputDataConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ParallelDataConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ParallelDataDataLocation.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ParallelDataFormat.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ParallelDataProperties.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/ParallelDataStatus.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/Profanity.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/StartTextTranslationJobRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/StartTextTranslationJobResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/StopTextTranslationJobRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/StopTextTranslationJobResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/Term.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TerminologyData.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TerminologyDataFormat.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TerminologyDataLocation.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TerminologyProperties.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TextTranslationJobFilter.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TextTranslationJobProperties.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TranslateTextRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TranslateTextResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/TranslationSettings.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/UnsupportedLanguagePairException.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/UpdateParallelDataRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-translate/source/model/UpdateParallelDataResult.cpp>
