#ifdef __cplusplus
extern "C" {
#endif
struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params
{
    void *linux_side;
    EIOBufferError _ret;
    const char *pchPath;
    EIOBufferMode mode;
    uint32_t unElementSize;
    uint32_t unElements;
    IOBufferHandle_t *pulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Open( struct cppIVRIOBuffer_IVRIOBuffer_002_Open_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params
{
    void *linux_side;
    EIOBufferError _ret;
    IOBufferHandle_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Close( struct cppIVRIOBuffer_IVRIOBuffer_002_Close_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params
{
    void *linux_side;
    EIOBufferError _ret;
    IOBufferHandle_t ulBuffer;
    void *pDst;
    uint32_t unBytes;
    uint32_t *punRead;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Read( struct cppIVRIOBuffer_IVRIOBuffer_002_Read_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params
{
    void *linux_side;
    EIOBufferError _ret;
    IOBufferHandle_t ulBuffer;
    void *pSrc;
    uint32_t unBytes;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_Write( struct cppIVRIOBuffer_IVRIOBuffer_002_Write_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params
{
    void *linux_side;
    PropertyContainerHandle_t _ret;
    IOBufferHandle_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer( struct cppIVRIOBuffer_IVRIOBuffer_002_PropertyContainer_params *params );

struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params
{
    void *linux_side;
    bool _ret;
    IOBufferHandle_t ulBuffer;
};
extern void cppIVRIOBuffer_IVRIOBuffer_002_HasReaders( struct cppIVRIOBuffer_IVRIOBuffer_002_HasReaders_params *params );

#ifdef __cplusplus
}
#endif
