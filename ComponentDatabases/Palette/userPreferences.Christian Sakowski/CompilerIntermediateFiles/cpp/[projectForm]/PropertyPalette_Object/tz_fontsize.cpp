extern Txt Ktz__fontsize;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_obj_p_PropertyPalette__Object_00tz__fontsize[];
void obj_p_PropertyPalette__Object_00tz__fontsize( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00tz__fontsize);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			t0=Ktz__fontsize.get();
			Long t1;
			t1=15;
			c.f.fLine=1;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}