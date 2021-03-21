/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "up2UService.h"

bool_t
xdr_e_couleur (XDR *xdrs, e_couleur *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_couleur (XDR *xdrs, couleur *objp)
{
	register int32_t *buf;

	 if (!xdr_e_couleur (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_e_connectivite (XDR *xdrs, e_connectivite *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_connectivite (XDR *xdrs, connectivite *objp)
{
	register int32_t *buf;

	 if (!xdr_e_connectivite (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_e_memoire (XDR *xdrs, e_memoire *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_memoire (XDR *xdrs, memoire *objp)
{
	register int32_t *buf;

	 if (!xdr_e_memoire (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_e_mode_achat (XDR *xdrs, e_mode_achat *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mode_achat (XDR *xdrs, mode_achat *objp)
{
	register int32_t *buf;

	 if (!xdr_e_mode_achat (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_date (XDR *xdrs, s_date *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->jour))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mois))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->annee))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_coord_bc (XDR *xdrs, s_coord_bc *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_long (xdrs, &objp->numero))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->crypto))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->mois))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->annee))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->numero);
			IXDR_PUT_LONG(buf, objp->crypto);
			IXDR_PUT_LONG(buf, objp->mois);
			IXDR_PUT_LONG(buf, objp->annee);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_long (xdrs, &objp->numero))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->crypto))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->mois))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->annee))
				 return FALSE;
		} else {
			objp->numero = IXDR_GET_LONG(buf);
			objp->crypto = IXDR_GET_LONG(buf);
			objp->mois = IXDR_GET_LONG(buf);
			objp->annee = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_long (xdrs, &objp->numero))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->crypto))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mois))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->annee))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_adresse (XDR *xdrs, s_adresse *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->numeroRue))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->codePostal))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->rue, 30,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_modele (XDR *xdrs, s_modele *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->prix_achat))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->prix_location))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->description, 255,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_params_modele (XDR *xdrs, s_params_modele *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->id_modele))
		 return FALSE;
	 if (!xdr_e_couleur (xdrs, &objp->couleur))
		 return FALSE;
	 if (!xdr_e_connectivite (xdrs, &objp->connectivite))
		 return FALSE;
	 if (!xdr_e_memoire (xdrs, &objp->memoire))
		 return FALSE;
	 if (!xdr_e_mode_achat (xdrs, &objp->mode_achat))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_client (XDR *xdrs, s_client *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_s_adresse (xdrs, &objp->adresse))
		 return FALSE;
	 if (!xdr_s_coord_bc (xdrs, &objp->coord_bc))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_assurance (XDR *xdrs, s_assurance *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->titre, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->prix))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->description, 255,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_s_location (XDR *xdrs, s_location *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->id))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->id_client))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->id_modele))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->id);
		IXDR_PUT_LONG(buf, objp->id_client);
		IXDR_PUT_LONG(buf, objp->id_modele);
		}
		 if (!xdr_s_params_modele (xdrs, &objp->params_modele))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->id_assurance))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->confirme))
			 return FALSE;
		 if (!xdr_s_date (xdrs, &objp->date_livraison))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 3 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->id))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->id_client))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->id_modele))
				 return FALSE;

		} else {
		objp->id = IXDR_GET_LONG(buf);
		objp->id_client = IXDR_GET_LONG(buf);
		objp->id_modele = IXDR_GET_LONG(buf);
		}
		 if (!xdr_s_params_modele (xdrs, &objp->params_modele))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->id_assurance))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->confirme))
			 return FALSE;
		 if (!xdr_s_date (xdrs, &objp->date_livraison))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id_client))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id_modele))
		 return FALSE;
	 if (!xdr_s_params_modele (xdrs, &objp->params_modele))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id_assurance))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->confirme))
		 return FALSE;
	 if (!xdr_s_date (xdrs, &objp->date_livraison))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_listeClients (XDR *xdrs, listeClients *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->client, 10,
		sizeof (s_client), (xdrproc_t) xdr_s_client))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_clients))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_listeAssurances (XDR *xdrs, listeAssurances *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->assurances, 10,
		sizeof (s_assurance), (xdrproc_t) xdr_s_assurance))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_assurances))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_listeModeles (XDR *xdrs, listeModeles *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->modeles, 10,
		sizeof (s_modele), (xdrproc_t) xdr_s_modele))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_modeles))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_listeModelesParams (XDR *xdrs, listeModelesParams *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->params_modele, 10,
		sizeof (s_params_modele), (xdrproc_t) xdr_s_params_modele))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->nb_modele_params))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_create_client (XDR *xdrs, p_create_client *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_s_adresse (xdrs, &objp->adresse))
		 return FALSE;
	 if (!xdr_s_coord_bc (xdrs, &objp->coord_bc))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_set_client (XDR *xdrs, p_set_client *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->id))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->nom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->prenom, 15,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_s_adresse (xdrs, &objp->adresse))
		 return FALSE;
	 if (!xdr_s_coord_bc (xdrs, &objp->coord_bc))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_location_client (XDR *xdrs, p_location_client *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->id_location))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id_client))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_location_modele (XDR *xdrs, p_location_modele *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->id_location))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id_modele))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_location_params_modele (XDR *xdrs, p_location_params_modele *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->id_location))
		 return FALSE;
	 if (!xdr_s_params_modele (xdrs, &objp->params_modele))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_location_assurance (XDR *xdrs, p_location_assurance *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->id_location))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->id_assurance))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_p_location_date (XDR *xdrs, p_location_date *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->id_location))
		 return FALSE;
	 if (!xdr_s_date (xdrs, &objp->date_livraison))
		 return FALSE;
	return TRUE;
}
