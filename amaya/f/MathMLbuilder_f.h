/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void MapMathMLAttribute ( char *attrName,
                                 AttributeType *attrType,
                                 char *elementName,
                                 ThotBool *level,
                                 Document doc );
extern void MapMathMLAttributeValue ( char *attVal,
                                      const AttributeType * attrType,
                                      int *value );
extern void MathMLEntityCreated ( unsigned char *entityValue,
                                  Language lang,
                                  char *entityName,
                                  Document doc );
extern ThotBool ElementNeedsPlaceholder ( Element el );
extern void SetIntMovelimitsAttr ( Element el,
                                   Document doc );
extern void CheckLargeOp ( Element el,
                           Document doc );
extern void SetSingleIntHorizStretchAttr ( Element el,
                                           Document doc,
                                           Element* selEl );
extern void SetIntVertStretchAttr ( Element el,
                                    Document doc,
                                    int base,
                                    Element* selEl );
extern void CheckMTable ( Element elMTABLE,
                          Document doc,
                          ThotBool placeholder );
extern void SetFontstyleAttr ( Element el,
                               Document doc );
extern void SetIntAddSpaceAttr ( Element el,
                                 Document doc );
extern ThotBool ChildOfMRowOrInferred ( Element el );
extern void CheckFence ( Element el,
                         Document doc );
extern void CreateFencedSeparators ( Element fencedExpression,
                                     Document doc,
                                     ThotBool record );
extern void MathMLScriptShift ( Document doc,
                                Element el,
                                char *value,
                                int attr );
extern void HandleRowalignAttribute ( Attribute attr,
                                      Element el,
                                      Document doc,
                                      ThotBool delete_ );
extern void HandleColalignAttribute ( Attribute attr,
                                      Element el,
                                      Document doc,
                                      ThotBool delete_,
                                      ThotBool allRows );
extern void HandleRowspacingAttribute ( Attribute attr,
                                        Element el,
                                        Document doc,
                                        ThotBool delete_ );
extern void HandleColumnspacingAttribute ( Attribute attr,
                                           Element el,
                                           Document doc,
                                           ThotBool delete_ );
extern void HandleRowlinesAttribute ( Attribute attr,
                                      Element el,
                                      Document doc,
                                      ThotBool delete_ );
extern void HandleColumnlinesAttribute ( Attribute attr,
                                         Element el,
                                         Document doc,
                                         ThotBool delete_ );
extern void HandleFramespacingAttribute ( Attribute attr,
                                          Element el,
                                          Document doc,
                                          ThotBool delete_ );
extern void SetDisplaystyleMathElement ( Element el,
                                         Document doc );
extern void MathMLElementCreated ( Element el,
                                   Document doc );
extern void EvaluateChildRendering ( Element el,
                                     Document doc );
extern void MathMLElementComplete ( ParserData *context,
                                    Element el,
                                    int *error );
extern void UnknownMathMLNameSpace ( ParserData *context,
                                     Element *unknownEl,
                                     char* content );
extern void SetFontfamily ( Document doc,
                            Element el,
                            char *value );
extern void MathMLlinethickness ( Document doc,
                                  Element el,
                                  char *value );
extern void MathMLAttrToStyleProperty ( Document doc,
                                        Element el,
                                        char *value,
                                        int attr );
extern void MathMLSetScriptLevel ( Document doc,
                                   Element el,
                                   char *value );
extern void MathMLSpacingAttr ( Document doc,
                                Element el,
                                const char *value,
                                int attr );
extern void MathMLSetDisplaystyleAttr ( Element el,
                                        Attribute attr,
                                        Document doc,
                                        ThotBool delete_ );
extern void MathMLAttributeComplete ( Attribute attr,
                                      Element el,
                                      Document doc );
extern void MathMLGetDTDName ( char *DTDname,
                               char *elementName );

#else /* __STDC__ */

extern void MapMathMLAttribute ( char *attrName,
                                   AttributeType *attrType,
                                   char *elementName,
                                   ThotBool *level,
                                   Document doc );
extern void MapMathMLAttributeValue ( char *attVal,
                                        const AttributeType * attrType,
                                        int *value );
extern void MathMLEntityCreated ( unsigned char *entityValue,
                                    Language lang,
                                    char *entityName,
                                    Document doc );
extern ThotBool ElementNeedsPlaceholder ( Element el );
extern void SetIntMovelimitsAttr ( Element el,
                                     Document doc );
extern void CheckLargeOp ( Element el,
                             Document doc );
extern void SetSingleIntHorizStretchAttr ( Element el,
                                             Document doc,
                                             Element* selEl );
extern void SetIntVertStretchAttr ( Element el,
                                      Document doc,
                                      int base,
                                      Element* selEl );
extern void CheckMTable ( Element elMTABLE,
                            Document doc,
                            ThotBool placeholder );
extern void SetFontstyleAttr ( Element el,
                                 Document doc );
extern void SetIntAddSpaceAttr ( Element el,
                                   Document doc );
extern ThotBool ChildOfMRowOrInferred ( Element el );
extern void CheckFence ( Element el,
                           Document doc );
extern void CreateFencedSeparators ( Element fencedExpression,
                                       Document doc,
                                       ThotBool record );
extern void MathMLScriptShift ( Document doc,
                                  Element el,
                                  char *value,
                                  int attr );
extern void HandleRowalignAttribute ( Attribute attr,
                                        Element el,
                                        Document doc,
                                        ThotBool delete_ );
extern void HandleColalignAttribute ( Attribute attr,
                                        Element el,
                                        Document doc,
                                        ThotBool delete_,
                                        ThotBool allRows );
extern void HandleRowspacingAttribute ( Attribute attr,
                                          Element el,
                                          Document doc,
                                          ThotBool delete_ );
extern void HandleColumnspacingAttribute ( Attribute attr,
                                             Element el,
                                             Document doc,
                                             ThotBool delete_ );
extern void HandleRowlinesAttribute ( Attribute attr,
                                        Element el,
                                        Document doc,
                                        ThotBool delete_ );
extern void HandleColumnlinesAttribute ( Attribute attr,
                                           Element el,
                                           Document doc,
                                           ThotBool delete_ );
extern void HandleFramespacingAttribute ( Attribute attr,
                                            Element el,
                                            Document doc,
                                            ThotBool delete_ );
extern void SetDisplaystyleMathElement ( Element el,
                                           Document doc );
extern void MathMLElementCreated ( Element el,
                                     Document doc );
extern void EvaluateChildRendering ( Element el,
                                       Document doc );
extern void MathMLElementComplete ( ParserData *context,
                                      Element el,
                                      int *error );
extern void UnknownMathMLNameSpace ( ParserData *context,
                                       Element *unknownEl,
                                       char* content );
extern void SetFontfamily ( Document doc,
                              Element el,
                              char *value );
extern void MathMLlinethickness ( Document doc,
                                    Element el,
                                    char *value );
extern void MathMLAttrToStyleProperty ( Document doc,
                                          Element el,
                                          char *value,
                                          int attr );
extern void MathMLSetScriptLevel ( Document doc,
                                     Element el,
                                     char *value );
extern void MathMLSpacingAttr ( Document doc,
                                  Element el,
                                  const char *value,
                                  int attr );
extern void MathMLSetDisplaystyleAttr ( Element el,
                                          Attribute attr,
                                          Document doc,
                                          ThotBool delete_ );
extern void MathMLAttributeComplete ( Attribute attr,
                                        Element el,
                                        Document doc );
extern void MathMLGetDTDName ( char *DTDname,
                                 char *elementName );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
