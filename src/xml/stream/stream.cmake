list(APPEND XML_PUBLIC_INCLUDES
    QXmlStreamAttribute
    QXmlStreamAttributes
    QXmlStreamEntityDeclaration
    QXmlStreamEntityDeclarations
    QXmlStreamEntityResolver
    QXmlStreamNamespaceDeclaration
    QXmlStreamNamespaceDeclarations
    QXmlStreamNotationDeclaration
    QXmlStreamNotationDeclarations
    QXmlStreamReader
    QXmlStreamWriter
)

list(APPEND XML_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamattribute.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamattributes.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamentitydeclaration.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamentitydeclarations.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamentityresolver.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamnamespacedeclaration.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamnamespacedeclarations.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamnotationdeclaration.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamnotationdeclarations.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamreader.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stream/qxmlstreamwriter.h
)
