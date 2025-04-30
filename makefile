LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi


.PHONY: all
.PHONY: clean
all:
	g++ -shared -fPIC -o libvulkan_renderer.so renderer/vulkan_renderer.cpp $(LDFLAGS)



clean:	
	find . ./renderer -name "*.o" -type f -delete
	find . ./renderer -name "*.so" -type f -delete