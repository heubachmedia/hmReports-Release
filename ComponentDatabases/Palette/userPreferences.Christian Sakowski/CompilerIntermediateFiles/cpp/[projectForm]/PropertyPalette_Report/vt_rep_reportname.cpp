extern Txt Kvl__current__area;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Report_00vt__rep__reportname[];
void obj_p_PropertyPalette__Report_00vt__rep__reportname( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vt__rep__reportname);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			Bool t1;
			t1=45==t0.get();
			Long t2;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,388)) goto _0;
			Bool t3;
			t3=20==t2.get();
			if (!( t1.get()||t3.get())) goto _2;
		}
		{
			Txt t5;
			t5=Kvl__current__area.get();
			Long t6;
			c.f.fLine=5;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t5.cv()},t6.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t6.get();
		}
		{
			Txt t7;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,655)) goto _0;
			g->Check(ctx);
			Long t8;
			t8=0;
			Long t9;
			t9=2;
			Long t10;
			t10=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,20).cv(),nullptr,t10.cv(),lvl__area.cv(),(CV*)9,t9.cv(),nullptr,(CV*)9,t8.cv(),nullptr,(CV*)9,t7.cv(),nullptr,(CV*)33},4)) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
