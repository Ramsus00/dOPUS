#include "byte_buffer.hpp"
#include <../nxFramework/common.h>

namespace tin::util
{
    ByteBuffer::ByteBuffer(size_t reserveSize)
    {
        m_buffer.reserve(reserveSize);
    }

    size_t ByteBuffer::GetSize()
    {
        return m_buffer.size();
    }

    u8* ByteBuffer::GetData()
    {
        return m_buffer.data();
    }

    void ByteBuffer::Resize(size_t size)
    {
        m_buffer.resize(size, 0);
    }

    void ByteBuffer::DebugPrintContents()
    {
        LOG("Buffer Size: 0x%lx\n", this->GetSize());
//        printBytes(nxlinkout, this->GetData(), this->GetSize(), true); //TODO
    }
}
