﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/serverlessrepo/model/ParameterDefinition.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * Application version details.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/Version">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API Version
  {
  public:
    Version();
    Version(const Aws::Utils::Json::JsonValue& jsonValue);
    Version& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The application Amazon Resource Name (ARN).
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline Version& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline Version& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The application Amazon Resource Name (ARN).
     */
    inline Version& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The date/time this resource was created.
     */
    inline const Aws::String& GetCreationTime() const{ return m_creationTime; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const Aws::String& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(Aws::String&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * The date/time this resource was created.
     */
    inline void SetCreationTime(const char* value) { m_creationTimeHasBeenSet = true; m_creationTime.assign(value); }

    /**
     * The date/time this resource was created.
     */
    inline Version& WithCreationTime(const Aws::String& value) { SetCreationTime(value); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline Version& WithCreationTime(Aws::String&& value) { SetCreationTime(std::move(value)); return *this;}

    /**
     * The date/time this resource was created.
     */
    inline Version& WithCreationTime(const char* value) { SetCreationTime(value); return *this;}


    /**
     * Array of parameter types supported by the application.
     */
    inline const Aws::Vector<ParameterDefinition>& GetParameterDefinitions() const{ return m_parameterDefinitions; }

    /**
     * Array of parameter types supported by the application.
     */
    inline void SetParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = value; }

    /**
     * Array of parameter types supported by the application.
     */
    inline void SetParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = std::move(value); }

    /**
     * Array of parameter types supported by the application.
     */
    inline Version& WithParameterDefinitions(const Aws::Vector<ParameterDefinition>& value) { SetParameterDefinitions(value); return *this;}

    /**
     * Array of parameter types supported by the application.
     */
    inline Version& WithParameterDefinitions(Aws::Vector<ParameterDefinition>&& value) { SetParameterDefinitions(std::move(value)); return *this;}

    /**
     * Array of parameter types supported by the application.
     */
    inline Version& AddParameterDefinitions(const ParameterDefinition& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.push_back(value); return *this; }

    /**
     * Array of parameter types supported by the application.
     */
    inline Version& AddParameterDefinitions(ParameterDefinition&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.push_back(std::move(value)); return *this; }


    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline Version& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline Version& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * The semantic version of the application:\n\n https://semver.org/
     */
    inline Version& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * A link to a public repository for the source code of your application.
     */
    inline const Aws::String& GetSourceCodeUrl() const{ return m_sourceCodeUrl; }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(const Aws::String& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = value; }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(Aws::String&& value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl = std::move(value); }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline void SetSourceCodeUrl(const char* value) { m_sourceCodeUrlHasBeenSet = true; m_sourceCodeUrl.assign(value); }

    /**
     * A link to a public repository for the source code of your application.
     */
    inline Version& WithSourceCodeUrl(const Aws::String& value) { SetSourceCodeUrl(value); return *this;}

    /**
     * A link to a public repository for the source code of your application.
     */
    inline Version& WithSourceCodeUrl(Aws::String&& value) { SetSourceCodeUrl(std::move(value)); return *this;}

    /**
     * A link to a public repository for the source code of your application.
     */
    inline Version& WithSourceCodeUrl(const char* value) { SetSourceCodeUrl(value); return *this;}


    /**
     * A link to the packaged SAM template of your application.
     */
    inline const Aws::String& GetTemplateUrl() const{ return m_templateUrl; }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(const Aws::String& value) { m_templateUrlHasBeenSet = true; m_templateUrl = value; }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(Aws::String&& value) { m_templateUrlHasBeenSet = true; m_templateUrl = std::move(value); }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline void SetTemplateUrl(const char* value) { m_templateUrlHasBeenSet = true; m_templateUrl.assign(value); }

    /**
     * A link to the packaged SAM template of your application.
     */
    inline Version& WithTemplateUrl(const Aws::String& value) { SetTemplateUrl(value); return *this;}

    /**
     * A link to the packaged SAM template of your application.
     */
    inline Version& WithTemplateUrl(Aws::String&& value) { SetTemplateUrl(std::move(value)); return *this;}

    /**
     * A link to the packaged SAM template of your application.
     */
    inline Version& WithTemplateUrl(const char* value) { SetTemplateUrl(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Vector<ParameterDefinition> m_parameterDefinitions;
    bool m_parameterDefinitionsHasBeenSet;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet;

    Aws::String m_sourceCodeUrl;
    bool m_sourceCodeUrlHasBeenSet;

    Aws::String m_templateUrl;
    bool m_templateUrlHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
