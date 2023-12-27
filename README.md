# QubeMeshing Class Color Picker Method

The `colorPicker` method in the `QubeMeshing` class is responsible for opening a color picker dialog, allowing the user to select a color. The chosen color is then retrieved, its RGBA components are extracted, and the information is written to a file named "fragmentShader.glsl".

## Method: colorPicker()

### Description

This method opens a color picker dialog, enabling the user to choose a color. Once a color is selected and deemed valid, its RGBA components are extracted. The method then generates a string representing the color in RGBA format and writes this string to a file named "fragmentShader.glsl".

### Usage

Invoke the `colorPicker` method to prompt the color picker dialog and select a color. Ensure that the color selection is valid before attempting to extract its components and write the RGBA values to the specified file.

### Example

```cpp
// Example usage of the colorPicker method
#include "QubeMeshing.h"
#include <QColorDialog>

// Assume QubeMeshing class and mRenderer are appropriately initialized

void YourFunction() {
    QubeMeshing qubeMeshingObject;

    // Call the colorPicker method
    qubeMeshingObject.colorPicker();
}
```
# OpenGLWindow Class - writeStringToFile Method

The `writeStringToFile` method in the `OpenGLWindow` class is responsible for writing a GLSL fragment shader code to a file. This method constructs a basic GLSL fragment shader code by appending the provided text to the shader, creating a new or overwriting an existing file specified by `filePath`.

## Method: writeStringToFile(const QString& text, const QString& filePath)

### Description

This method creates or opens a file specified by `filePath` and writes a GLSL fragment shader code into it. It constructs the fragment shader by appending the provided `text` to the shader template, setting the color to be used for `gl_FragColor`.

### Parameters

- `text`: A QString containing the color information to be embedded in the fragment shader code.
- `filePath`: A QString representing the path of the file where the GLSL fragment shader code will be written.

### Usage

Invoke the `writeStringToFile` method, passing the desired color information (`text`) and the file path (`filePath`) where the GLSL fragment shader code should be written.

### Example

```cpp
// Example usage of the writeStringToFile method
#include "OpenGLWindow.h"

void YourFunction() {
    OpenGLWindow openGLWindowObject;

    // Example color string
    QString colorString = "255, 0, 0, 255"; // Red color (RGBA format)

    // File path where the GLSL fragment shader code will be written
    QString filePath = "fragmentShader.glsl";

    // Call the writeStringToFile method
    openGLWindowObject.writeStringToFile(colorString, filePath);
}
```
![Screenshot (170)](https://github.com/shwetacctech/ColorPalettePicker/assets/149310316/0410c0ce-77df-4c56-aaeb-070e0939280e)
![Screenshot (171)](https://github.com/shwetacctech/ColorPalettePicker/assets/149310316/fdacf22f-fc18-4ecd-821d-0f4b7c307b8e)
![Screenshot (172)](https://github.com/shwetacctech/ColorPalettePicker/assets/149310316/18d813ab-4768-428f-b834-5c1462993137)
