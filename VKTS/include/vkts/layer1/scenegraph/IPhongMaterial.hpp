/**
 * VKTS - VulKan ToolS.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) since 2014 Norbert Nopper
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef VKTS_IPHONGMATERIAL_HPP_
#define VKTS_IPHONGMATERIAL_HPP_

#include <vkts/vkts.hpp>

namespace vkts
{

class IPhongMaterial: public IMaterial, public ICloneable<IPhongMaterial>
{

public:

    IPhongMaterial() :
        IMaterial(), ICloneable<IPhongMaterial>()
    {
    }

    virtual ~IPhongMaterial()
    {
    }

    virtual const ITextureSP& getAmbient() const = 0;

    virtual void setAmbient(const ITextureSP& ambient) = 0;

    virtual const ITextureSP& getDiffuse() const = 0;

    virtual void setDiffuse(const ITextureSP& diffuse) = 0;

    virtual const ITextureSP& getSpecular() const = 0;

    virtual void setSpecular(const ITextureSP& specular) = 0;

    virtual const ITextureSP& getSpecularShininess() const = 0;

    virtual void setSpecularShininess(const ITextureSP& specularShininess) = 0;

};

typedef std::shared_ptr<IPhongMaterial> IPhongMaterialSP;

} /* namespace vkts */

#endif /* VKTS_IPHONGMATERIAL_HPP_ */
