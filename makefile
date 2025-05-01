CXX = g++
CXXFLAGS = -std=c++17 -fPIC
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
DEFINES = -D_GLIBCXX_USE_CXX11_ABI=1

APP_SRC = renderer/vulkan_renderer.cpp
RENDERER_SRC = $(wildcard renderer/*.cpp)
SRCS := $(RENDERER_SRC) $(APP_SRC)
OBJS := $(SRCS:.cpp=.o)
TARGET = application_renderer.so

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -shared -o $@ $^ $(LDFLAGS)

renderer/%.o: renderer/%.cpp renderer/%.hpp
	$(CXX) $(CXXFLAGS) $(DEFINES) -c $< -o $@


%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEFINES) -c $< -o $@

clean:
	find . ./renderer -name "*.o" -type f -delete
	find . ./renderer -name "*.so" -type f -delete
