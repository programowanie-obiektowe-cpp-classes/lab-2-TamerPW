#pragma once
#include "Resource.hpp"

class ResourceManager
{
    public: 
        ResourceManager()
        {
        	cos = new Resource();
		}
        
        double get()
        {
        	return cos->get();
		}
        
        ResourceManager(const ResourceManager& i)
        {
        	cos = new Resource();
        	*cos = *(i.cos);
		}
        
    	ResourceManager& operator=(const ResourceManager& i)
    	{
    		*cos = *i.cos;
    		return *this;
		}
		
		~ResourceManager()
		{
			delete cos;
		}
		
    private: 
        Resource* cos; 
};// Czy dziala?