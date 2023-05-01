# Converting a TensorFlow Lite Model {#openvino_docs_MO_DG_prepare_model_convert_model_Convert_Model_From_TensorFlow_Lite}

@sphinxdirective

To convert a TensorFlow Lite model, use the ``mo`` script and specify the path to the input ``.tflite`` model file:

.. code-block:: sh

   mo --input_model <INPUT_MODEL>.tflite

.. note:: TensorFlow Lite models are supported via FrontEnd API. You may skip conversion to IR and read models directly by OpenVINO runtime API.

Supported TensorFlow Lite Layers
###################################

For the list of supported standard layers, refer to the :doc:`Supported Framework Layers <openvino_docs_MO_DG_prepare_model_Supported_Frameworks_Layers>` page.

Supported TensorFlow Lite Models
###################################

More than eighty percent of public TensorFlow Lite models are supported from open sources `TensorFlow Hub <https://tfhub.dev/s?deployment-format=lite&subtype=module,placeholder>`__ and `MediaPipe <https://developers.google.com/mediapipe>`__.
Unsupported models usually have custom TensorFlow Lite operations.

@endsphinxdirective