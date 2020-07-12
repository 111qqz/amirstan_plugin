
#include "plugin/amirInferPlugin.h"
#include "plugin/deformableConvPlugin/deformableConvPlugin.h"
#include "plugin/groupNormPlugin/groupNormPlugin.h"
#include "plugin/repeatDimsPlugin/repeatDimsPlugin.h"
#include "plugin/exViewPlugin/exViewPlugin.h"
#include "plugin/layerNormPlugin/layerNormPlugin.h"
#include "plugin/gridAnchorDynamicPlugin/gridAnchorDynamicPlugin.h"
#include "plugin/roiExtractorPlugin/roiExtractorPlugin.h"
#include "plugin/delta2bboxPlugin/delta2bboxPlugin.h"
#include "plugin/batchedNMSPlugin/batchedNMSPlugin.h"


extern "C"
{
    
    bool initLibAmirstanInferPlugins(){
        return true;
    }
} // extern "C"