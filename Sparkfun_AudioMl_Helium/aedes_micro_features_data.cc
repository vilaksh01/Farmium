/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="/content/Aedes5.wav" \
 * --output_c_file="aedes_micro_features_data.cc" \
 */

const int g_aedes5_width = 40;
const int g_aedes5_height = 49;
const unsigned char g_aedes5_data[] = {
  234, 211, 228, 218, 228, 216, 226, 218, 235, 220, 
  225, 215, 228, 219, 230, 211, 226, 221, 239, 221, 
  236, 223, 240, 220, 239, 223, 242, 223, 242, 222, 
  233, 205, 229, 222, 244, 226, 246, 226, 232, 217, 
  212, 202, 223, 202, 218, 193, 225, 198, 211, 193, 
  211, 203, 213, 195, 205, 200, 225, 177, 213, 177, 
  225, 202, 228, 202, 213, 200, 227, 205, 228, 202, 
  213, 194, 225, 217, 234, 202, 225, 192, 219, 200, 
  215, 192, 215, 186, 215, 195, 213, 193, 205, 191, 
  214, 180, 212, 201, 224, 188, 191, 180, 222, 190, 
  203, 187, 220, 194, 212, 194, 215, 198, 218, 176, 
  200, 175, 208, 193, 217, 188, 217, 186, 202, 187, 
  215, 200, 202, 185, 202, 162, 197, 182, 216, 175, 
  195, 166, 212, 189, 202, 171, 203, 190, 213, 179, 
  194, 179, 202, 182, 218, 195, 208, 181, 209, 171, 
  192, 163, 180, 191, 213, 180, 199, 159, 198, 175, 
  202, 172, 203, 140, 180, 174, 187, 168, 202, 168, 
  200, 195, 221, 169, 207, 178, 198, 176, 177, 175, 
  208, 184, 210, 190, 213, 196, 215, 187, 213, 201, 
  213, 188, 213, 188, 212, 162, 209, 169, 202, 180, 
  185, 142, 180, 51, 166, 156, 184, 157, 173, 130, 
  187, 153, 195, 190, 207, 161, 201, 139, 170, 150, 
  205, 193, 215, 168, 200, 182, 210, 175, 194, 164, 
  199, 165, 197, 105, 193, 171, 207, 174, 196, 174, 
  193, 172, 197, 155, 193, 183, 184, 156, 177, 117, 
  171, 166, 202, 172, 195, 157, 192, 166, 204, 182, 
  205, 174, 207, 175, 195, 170, 204, 172, 184, 142, 
  185, 148, 195, 167, 202, 167, 206, 166, 178, 170, 
  178, 163, 200, 173, 200, 154, 170, 137, 190, 90, 
  184, 135, 208, 173, 186, 147, 192, 143, 200, 138, 
  212, 191, 203, 146, 190, 154, 201, 170, 189, 162, 
  169, 146, 187, 143, 193, 151, 177, 85, 179, 133, 
  175, 110, 198, 174, 189, 112, 202, 160, 187, 0, 
  184, 171, 222, 190, 182, 151, 179, 134, 171, 112, 
  223, 202, 196, 126, 156, 105, 218, 196, 172, 102, 
  151, 90, 195, 68, 204, 166, 179, 99, 166, 139, 
  164, 68, 189, 123, 134, 95, 186, 171, 196, 170, 
  189, 181, 222, 181, 170, 169, 175, 90, 170, 140, 
  230, 197, 179, 105, 180, 107, 226, 192, 131, 78, 
  183, 165, 170, 179, 208, 132, 188, 177, 172, 194, 
  160, 51, 171, 147, 205, 171, 167, 145, 188, 154, 
  160, 166, 200, 114, 164, 148, 146, 141, 160, 120, 
  210, 158, 164, 122, 176, 162, 213, 136, 139, 102, 
  151, 112, 179, 162, 185, 134, 200, 188, 177, 170, 
  182, 148, 182, 133, 190, 143, 172, 134, 181, 144, 
  171, 173, 203, 132, 178, 0, 102, 0, 169, 134, 
  166, 51, 179, 68, 148, 169, 187, 0, 165, 90, 
  182, 99, 146, 166, 176, 0, 191, 146, 167, 85, 
  138, 85, 156, 0, 102, 0, 119, 0, 130, 138, 
  166, 191, 204, 51, 143, 154, 195, 85, 146, 132, 
  161, 0, 131, 123, 177, 171, 170, 68, 167, 85, 
  180, 140, 172, 143, 151, 139, 166, 0, 187, 102, 
  186, 139, 119, 95, 201, 179, 193, 90, 133, 105, 
  197, 170, 199, 107, 139, 114, 177, 177, 195, 144, 
  126, 0, 162, 0, 138, 125, 179, 0, 179, 161, 
  169, 110, 161, 151, 183, 119, 179, 122, 171, 138, 
  129, 95, 169, 150, 164, 144, 166, 90, 177, 183, 
  205, 172, 199, 172, 102, 0, 188, 165, 184, 152, 
  107, 0, 181, 163, 173, 120, 185, 161, 185, 153, 
  166, 123, 189, 126, 184, 172, 178, 119, 192, 149, 
  166, 0, 164, 132, 164, 0, 131, 68, 156, 107, 
  167, 51, 184, 136, 150, 68, 149, 85, 134, 0, 
  68, 0, 164, 85, 174, 112, 176, 51, 149, 51, 
  165, 145, 170, 95, 161, 120, 181, 146, 168, 105, 
  166, 90, 95, 68, 164, 95, 136, 102, 166, 136, 
  147, 0, 158, 78, 161, 116, 174, 138, 147, 0, 
  102, 0, 135, 114, 127, 51, 156, 119, 167, 0, 
  157, 117, 166, 85, 167, 117, 152, 107, 175, 85, 
  123, 0, 99, 0, 143, 0, 125, 125, 163, 147, 
  143, 0, 139, 0, 166, 112, 187, 110, 156, 68, 
  51, 0, 134, 78, 166, 85, 155, 107, 176, 85, 
  161, 179, 206, 0, 157, 120, 182, 51, 150, 0, 
  171, 110, 145, 0, 130, 0, 151, 0, 141, 0, 
  152, 0, 112, 0, 143, 102, 154, 0, 134, 0, 
  0, 0, 0, 0, 138, 68, 122, 0, 162, 119, 
  176, 78, 160, 116, 158, 0, 149, 85, 120, 0, 
  146, 0, 170, 153, 162, 0, 159, 125, 163, 0, 
  107, 0, 127, 0, 156, 119, 164, 117, 132, 0, 
  0, 0, 95, 0, 157, 95, 143, 0, 168, 0, 
  168, 0, 117, 114, 157, 0, 110, 0, 107, 0, 
  172, 127, 0, 0, 159, 0, 110, 0, 0, 0, 
  0, 0, 107, 0, 107, 0, 150, 68, 107, 0, 
  85, 0, 125, 0, 117, 0, 0, 68, 187, 0, 
  99, 0, 154, 0, 138, 0, 112, 0, 152, 0, 
  78, 68, 114, 0, 116, 78, 154, 102, 90, 0, 
  0, 0, 112, 95, 138, 68, 99, 0, 107, 0, 
  0, 0, 112, 90, 99, 0, 90, 112, 175, 122, 
  148, 0, 120, 0, 90, 51, 95, 0, 114, 0, 
  162, 136, 183, 159, 159, 0, 155, 130, 157, 85, 
  164, 0, 143, 68, 141, 0, 85, 0, 78, 51, 
  153, 0, 68, 0, 68, 0, 180, 102, 134, 99, 
  146, 0, 107, 0, 68, 78, 68, 0, 122, 0, 
  161, 95, 99, 0, 110, 0, 153, 68, 148, 120, 
  172, 161, 185, 51, 107, 0, 154, 0, 95, 139, 
  193, 99, 134, 0, 129, 170, 179, 0, 127, 68, 
  174, 85, 152, 0, 0, 95, 137, 0, 150, 51, 
  144, 120, 0, 0, 0, 78, 105, 0, 150, 0, 
  126, 126, 183, 107, 68, 0, 0, 0, 146, 51, 
  167, 51, 95, 0, 116, 102, 191, 122, 68, 0, 
  147, 102, 142, 112, 149, 107, 120, 0, 99, 102, 
  165, 107, 0, 0, 131, 112, 165, 95, 85, 0, 
  123, 150, 183, 90, 134, 107, 149, 0, 51, 0, 
  176, 0, 0, 68, 85, 119, 165, 0, 0, 0, 
  68, 0, 102, 153, 169, 85, 112, 0, 157, 143, 
  51, 0, 68, 99, 119, 0, 112, 116, 160, 68, 
  157, 0, 151, 68, 68, 0, 95, 0, 0, 0, 
  117, 0, 0, 0, 78, 0, 158, 0, 128, 0, 
  85, 0, 68, 90, 151, 0, 119, 99, 131, 85, 
  166, 90, 105, 0, 51, 107, 154, 0, 132, 119, 
  123, 0, 154, 112, 134, 102, 142, 0, 0, 0, 
  139, 68, 0, 85, 99, 0, 129, 0, 78, 0, 
  105, 0, 0, 0, 120, 0, 51, 0, 105, 0, 
  0, 0, 122, 0, 0, 0, 161, 51, 102, 112, 
  130, 0, 165, 131, 139, 0, 102, 0, 95, 51, 
  110, 0, 112, 78, 68, 0, 149, 102, 51, 0, 
  90, 0, 130, 0, 0, 78, 95, 0, 116, 90, 
  155, 0, 114, 78, 90, 0, 127, 0, 163, 117, 
  0, 51, 170, 110, 134, 116, 132, 68, 107, 90, 
  149, 0, 138, 0, 85, 0, 152, 0, 68, 0, 
  78, 85, 145, 0, 0, 51, 95, 0, 116, 148, 
  110, 0, 51, 0, 107, 0, 51, 85, 125, 0, 
  171, 99, 144, 0, 112, 0, 105, 0, 110, 0, 
  166, 107, 131, 105, 135, 99, 160, 0, 68, 0, 
  68, 0, 131, 0, 122, 85, 123, 0, 138, 144, 
  119, 0, 146, 85, 85, 0, 0, 0, 117, 0, 
  141, 0, 95, 0, 150, 0, 105, 0, 0, 0, 
  119, 0, 140, 102, 129, 0, 114, 0, 78, 0, 
  68, 0, 0, 0, 0, 0, 102, 0, 138, 0, 
  153, 90, 139, 127, 151, 0, 85, 51, 120, 0, 
  51, 0, 114, 0, 107, 78, 0, 0, 51, 0, 
  0, 0, 0, 68, 134, 0, 0, 0, 51, 0, 
  0, 0, 0, 0, 107, 0, 0, 0, 119, 0, 
  102, 0, 156, 0, 123, 137, 161, 0, 144, 0, 
  117, 0, 0, 0, 110, 107, 114, 0, 95, 85, 
  0, 0, 105, 102, 139, 0, 0, 0, 78, 0, 
  95, 78, 102, 0, 0, 85, 85, 0, 128, 0, 
  142, 0, 123, 90, 68, 0, 0, 0, 114, 0, 
  90, 0, 0, 0, 110, 0, 51, 0, 107, 0, 
  85, 0, 0, 99, 131, 0, 68, 0, 51, 105, 
  146, 0, 137, 0, 0, 0, 68, 0, 119, 0, 
  0, 0, 110, 95, 112, 0, 122, 120, 135, 0, 
  131, 0, 0, 0, 147, 85, 99, 0, 68, 0, 
  51, 0, 119, 68, 102, 0, 0, 0, 119, 0, 
  78, 0, 147, 0, 107, 0, 51, 0, 68, 0, 
  95, 0, 148, 107, 122, 0, 169, 132, 126, 0, 
  99, 0, 0, 105, 162, 0, 51, 51, 105, 68, 
  0, 51, 95, 117, 172, 0, 0, 0, 0, 0, 
  122, 0, 78, 51, 51, 0, 0, 0, 51, 0, 
  112, 0, 160, 117, 139, 134, 0, 0, 78, 0, 
  0, 0, 0, 51, 78, 0, 78, 112, 147, 0, 
  0, 0, 51, 68, 127, 0, 0, 0, 0, 68, 
  145, 0, 0, 0, 0, 0, 0, 0, 85, 0, 
  0, 51, 138, 0, 130, 0, 110, 114, 170, 123, 
  95, 0, 110, 0, 99, 0, 68, 0, 99, 51, 
  95, 68, 152, 68, 85, 0, 0, 0, 117, 85, 
  0, 0, 125, 0, 122, 0, 112, 0, 122, 0, 
  112, 0, 107, 0, 0, 0, 135, 0, 112, 0, 
  110, 78, 140, 0, 148, 0, 126, 0, 0, 51, 
  0, 0, 143, 107, 102, 0, 90, 0, 137, 114, 
  0, 0, 120, 68, 120, 0, 0, 0, 138, 0, 
  114, 85, 107, 0, 0, 78, 157, 0, 102, 107, 
  95, 134, 143, 0, 112, 0, 120, 0, 95, 133, 
  95, 0, 51, 0, 99, 114, 116, 0, 51, 51, 
  0, 0, 90, 144, 137, 0, 68, 0, 138, 0, 
  148, 116, 117, 0, 95, 51, 131, 68, 85, 0, 
  90, 0, 51, 95, 90, 0, 0, 0, 0, 172, 
  0, 0, 90, 51, 68, 0, 0, 0, 78, 85, 
  0, 0, 0, 0, 85, 0, 0, 0, 143, 0, 
  0, 0, 51, 0, 0, 0, 90, 0, 120, 0, 
  0, 0, 134, 114, 90, 0, 102, 68, 127, 154, 
  0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 
  85, 0, 0, 0, 99, 0, 0, 0, 68, 0, 
  0, 0, 122, 0, 139, 105, 90, 0, 0, 0, 
  0, 85, 159, 85, 119, 0, 90, 0, 138, 105, 
  0, 0, 99, 134, 0, 0, 112, 0, 127, 78, 
  142, 85, 68, 51, 95, 0, 90, 128, 114, 0, 
  68, 0, 99, 114, 90, 0, 0, 0, 138, 51, 
  114, 51, 164, 123, 125, 116, 130, 0, 148, 0, 
  0, 0, 78, 0, 78, 0, 0, 0, 152, 0, 
  117, 0, 130, 126, 177, 0, 114, 112, 85, 0, 
  0, 0, 95, 0, 0, 0, 99, 0, 0, 68, 
  112, 0, 141, 0, 138, 105, 151, 68, 126, 0, 
  0, 0, 144, 105, 133, 0, 68, 107, 151, 0, 
  85, 0, 152, 110, 166, 99, 149, 139, 172, 68, 
  0, 0, 0, 0, 90, 0, 0, 0, 138, 102, 
  116, 137, 134, 0, 0, 0, 130, 0, 0, 0, 
  0, 0, 110, 0, 0, 51, 90, 0, 126, 107, 
  78, 0, 0, 133, 133, 51, 147, 110, 116, 0, 
  122, 0, 0, 0, 0, 0, 78, 102, 151, 68, 
  119, 78, 138, 78, 144, 78, 78, 0, 160, 117, 
  0, 0, 78, 78, 0, 0, 112, 0, 112, 112, 
  51, 0, 99, 0, 125, 68, 105, 112, 114, 0, 
  0, 0, 0, 0, 116, 110, 125, 78, 99, 51, 
  146, 68, 133, 95, 140, 0, 68, 114, 173, 0, 
  0, 0, 117, 0, 85, 0, 0, 0, 78, 0, 
  0, 51, 95, 0, 122, 0, 0, 0, 68, 0, 
};