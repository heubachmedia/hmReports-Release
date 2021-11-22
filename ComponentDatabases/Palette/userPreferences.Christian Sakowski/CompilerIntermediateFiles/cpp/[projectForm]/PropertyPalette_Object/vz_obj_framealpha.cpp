extern Txt kOwNeHfIfgdk;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_obj_p_PropertyPalette__Object_00vz__obj__framealpha[];
void obj_p_PropertyPalette__Object_00vz__obj__framealpha( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00vz__obj__framealpha);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			t0=2+2000;
			Txt t1;
			t1=kOwNeHfIfgdk.get();
			c.f.fLine=1;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t0.cv(),t1.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
