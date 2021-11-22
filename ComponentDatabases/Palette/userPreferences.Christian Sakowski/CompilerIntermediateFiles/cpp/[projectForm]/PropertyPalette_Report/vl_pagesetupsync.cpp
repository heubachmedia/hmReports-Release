extern Txt K;
extern Txt Kvl__current__area;
extern Txt kYOs7kLNy3fo;
Asm4d_Proc proc_OBJECT__GETLONGINT;
extern unsigned char D_obj_p_PropertyPalette__Report_00vl__pagesetupsync[];
void obj_p_PropertyPalette__Report_00vl__pagesetupsync( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vl__pagesetupsync);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=5;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Txt t4;
			t4=kYOs7kLNy3fo.get();
			Long t5;
			c.f.fLine=7;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t6;
			t6=K.get();
			Long t7;
			t7=18;
			Long t8;
			t8=lvl__area.get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,20).cv(),nullptr,t8.cv(),lvl__area.cv(),(CV*)9,t7.cv(),nullptr,(CV*)9,t5.cv(),nullptr,(CV*)9,t6.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
