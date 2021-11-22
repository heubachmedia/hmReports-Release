extern Txt Kfillcolor__popup;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_obj_p_PropertyPalette__Object_00fillcolor__popup[];
void obj_p_PropertyPalette__Object_00fillcolor__popup( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00fillcolor__popup);
	if (!ctx->doingAbort) try {
		{
			Long t0;
			c.f.fLine=1;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Long t2;
			t2=1+1000;
			Txt t3;
			t3=Kfillcolor__popup.get();
			c.f.fLine=3;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t2.cv(),t3.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
