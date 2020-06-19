// TODO unstable
#define DWG_TYPE DWG_TYPE_ASSOCEXTRUDEDSURFACEACTIONBODY
#include "common.c"

void
api_process (dwg_object *obj)
{
  int error, isnew;
  ASSOCPATHBASEDSURFACEACTIONBODY_fields;
  BITCODE_H *deps;
  // AcDbAssocExtrudedSurfaceActionBody
  BITCODE_BL class_version;

  Dwg_Version_Type dwg_version = obj->parent->header.version;
  dwg_obj_assocextrudedsurfaceactionbody *_obj = dwg_object_to_ASSOCEXTRUDEDSURFACEACTIONBODY (obj);

  // ASSOCACTIONPARAM:
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, is_r2013, BS);
  SINCE (R_2013) {
    CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, aap_version, BL);
    CHK_ENTITY_MAX  (_obj, ASSOCEXTRUDESURFACEACTIONBODY, aap_version, BL, 2);
  }
  CHK_ENTITY_UTF8TEXT (_obj, ASSOCEXTRUDESURFACEACTIONBODY, name);
  CHK_ASSOCPARAMBASEDACTIONBODY (ASSOCEXTRUDESURFACEACTIONBODY);
  // AcDbAssocSurfaceActionBody
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, sab_status, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, sab_b1, B);
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, sab_l2, BL);
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, sab_b2, B);
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, sab_s1, BS);
  CHK_ENTITY_H (_obj, ASSOCEXTRUDESURFACEACTIONBODY, sab_h330);
  // AcDbAssocPathBasedSurfaceActionBody
  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDESURFACEACTIONBODY, pbsab_status, BL);

  CHK_ENTITY_TYPE (_obj, ASSOCEXTRUDEDSURFACEACTIONBODY, class_version, BL);
}
