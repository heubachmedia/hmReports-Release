extern Txt Kvt__obj__name;
Asm4d_Proc proc_PAL__CHANGE__OBJECT;
extern unsigned char D_obj_p_PropertyPalette__Object_00vt__obj__name[];
void obj_p_PropertyPalette__Object_00vt__obj__name( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Object_00vt__obj__name);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			t0=Kvt__obj__name.get();
			Long t1;
			t1=4;
			c.f.fLine=1;
			proc_PAL__CHANGE__OBJECT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t2;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (20!=t2.get()) goto _2;
		}
		c.f.fLine=5;
		if (g->Call(ctx,(PCV[]){nullptr,Long(-2001).cv()},1,1086)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
