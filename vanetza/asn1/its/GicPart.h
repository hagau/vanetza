/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_GicPart_H_
#define	_GicPart_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Direction.h"
#include "NativeInteger.h"
#include "IviType.h"
#include "IviPurpose.h"
#include "LaneStatus.h"
#include "DriverCharacteristics.h"
#include "Zid.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "LanePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VarLengthNumber;
struct CompleteVehicleCharacteristics;
struct RSCode;
struct Text;

/* GicPart */
typedef struct GicPart {
	struct GicPart__detectionZoneIds {
		A_SEQUENCE_OF(Zid_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *detectionZoneIds;
	struct VarLengthNumber	*its_Rrid	/* OPTIONAL */;
	struct GicPart__relevanceZoneIds {
		A_SEQUENCE_OF(Zid_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *relevanceZoneIds;
	Direction_t	*direction	/* OPTIONAL */;
	struct GicPart__driverAwarenessZoneIds {
		A_SEQUENCE_OF(Zid_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *driverAwarenessZoneIds;
	long	*minimumAwarenessTime	/* OPTIONAL */;
	struct GicPart__applicableLanes {
		A_SEQUENCE_OF(LanePosition_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *applicableLanes;
	IviType_t	 iviType;
	IviPurpose_t	*iviPurpose	/* OPTIONAL */;
	LaneStatus_t	*laneStatus	/* OPTIONAL */;
	struct GicPart__vehicleCharacteristics {
		A_SEQUENCE_OF(struct CompleteVehicleCharacteristics) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *vehicleCharacteristics;
	DriverCharacteristics_t	*driverCharacteristics	/* OPTIONAL */;
	long	*layoutId	/* OPTIONAL */;
	long	*preStoredlayoutId	/* OPTIONAL */;
	struct GicPart__roadSignCodes {
		A_SEQUENCE_OF(struct RSCode) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} roadSignCodes;
	struct GicPart__extraText {
		A_SEQUENCE_OF(struct Text) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *extraText;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GicPart_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GicPart;
extern asn_SEQUENCE_specifics_t asn_SPC_GicPart_specs_1;
extern asn_TYPE_member_t asn_MBR_GicPart_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VarLengthNumber.h"
#include "CompleteVehicleCharacteristics.h"
#include "RSCode.h"
#include "Text.h"

#endif	/* _GicPart_H_ */
#include "asn_internal.h"
