// Unity Build generated by CMake
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/CodeBuildClient.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/CodeBuildEndpoint.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/CodeBuildErrorMarshaller.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/CodeBuildErrors.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ArtifactNamespace.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ArtifactPackaging.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ArtifactsType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/AuthType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchDeleteBuildsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchDeleteBuildsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetBuildBatchesRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetBuildBatchesResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetBuildsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetBuildsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetProjectsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetProjectsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetReportGroupsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetReportGroupsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetReportsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchGetReportsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchReportModeType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BatchRestrictions.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BucketOwnerAccess.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/Build.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildArtifacts.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildBatch.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildBatchFilter.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildBatchPhase.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildBatchPhaseType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildGroup.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildNotDeleted.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildPhase.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildPhaseType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildStatusConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/BuildSummary.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CacheMode.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CacheType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CloudWatchLogsConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CodeCoverage.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CodeCoverageReportSummary.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ComputeType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CreateProjectRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CreateProjectResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CreateReportGroupRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CreateReportGroupResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CreateWebhookRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CreateWebhookResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/CredentialProviderType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DebugSession.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteBuildBatchRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteBuildBatchResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteProjectRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteProjectResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteReportGroupRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteReportGroupResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteReportRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteReportResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteResourcePolicyRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteResourcePolicyResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteSourceCredentialsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteSourceCredentialsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteWebhookRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DeleteWebhookResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DescribeCodeCoveragesRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DescribeCodeCoveragesResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DescribeTestCasesRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/DescribeTestCasesResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/EnvironmentImage.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/EnvironmentLanguage.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/EnvironmentPlatform.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/EnvironmentType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/EnvironmentVariable.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/EnvironmentVariableType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ExportedEnvironmentVariable.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/FileSystemType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/GetReportGroupTrendRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/GetReportGroupTrendResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/GetResourcePolicyRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/GetResourcePolicyResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/GitSubmodulesConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ImagePullCredentialsType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ImportSourceCredentialsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ImportSourceCredentialsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/InvalidateProjectCacheRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/InvalidateProjectCacheResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/LanguageType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildBatchesForProjectRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildBatchesForProjectResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildBatchesRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildBatchesResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildsForProjectRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildsForProjectResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListBuildsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListCuratedEnvironmentImagesRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListCuratedEnvironmentImagesResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListProjectsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListProjectsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListReportGroupsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListReportGroupsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListReportsForReportGroupRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListReportsForReportGroupResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListReportsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListReportsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListSharedProjectsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListSharedProjectsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListSharedReportGroupsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListSharedReportGroupsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListSourceCredentialsRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ListSourceCredentialsResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/LogsConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/LogsConfigStatusType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/LogsLocation.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/NetworkInterface.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/PhaseContext.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/PlatformType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/Project.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectArtifacts.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectBadge.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectBuildBatchConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectCache.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectEnvironment.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectFileSystemLocation.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectSortByType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectSource.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectSourceVersion.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ProjectVisibilityType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/PutResourcePolicyRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/PutResourcePolicyResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/RegistryCredential.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/Report.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportCodeCoverageSortByType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportExportConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportExportConfigType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportFilter.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportGroup.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportGroupSortByType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportGroupStatusType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportGroupTrendFieldType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportGroupTrendStats.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportPackagingType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportStatusType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ReportWithRawData.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ResolvedArtifact.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/RetryBuildBatchRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/RetryBuildBatchResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/RetryBuildBatchType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/RetryBuildRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/RetryBuildResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/S3LogsConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/S3ReportExportConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/ServerType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/SharedResourceSortByType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/SortOrderType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/SourceAuth.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/SourceAuthType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/SourceCredentialsInfo.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/SourceType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StartBuildBatchRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StartBuildBatchResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StartBuildRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StartBuildResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StatusType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StopBuildBatchRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StopBuildBatchResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StopBuildRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/StopBuildResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/Tag.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/TestCase.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/TestCaseFilter.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/TestReportSummary.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateProjectRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateProjectResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateProjectVisibilityRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateProjectVisibilityResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateReportGroupRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateReportGroupResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateWebhookRequest.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/UpdateWebhookResult.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/VpcConfig.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/Webhook.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/WebhookBuildType.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/WebhookFilter.cpp>
#include </home/d7y/dragonfly-repository-agent-by-xz/build/_deps/aws-core-src/aws-cpp-sdk-codebuild/source/model/WebhookFilterType.cpp>
