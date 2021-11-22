Asm4d_Proc proc_PAL__CLICK__MULTI;
extern unsigned char D_obj_p_PropertyPalette__Object_00tt__fontlist__multi[];
void obj_p_PropertyPalette__Object_00tt__fontlist__multi( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00tt__fontlist__multi);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			c.f.fLine=1;
			proc_PAL__CLICK__MULTI(glob,ctx,0,1,(PCV[]){t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
