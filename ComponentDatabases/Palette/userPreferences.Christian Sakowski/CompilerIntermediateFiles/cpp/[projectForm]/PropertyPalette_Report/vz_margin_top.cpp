extern Txt Kvl__current__area;
extern Txt Kvz__margin__top;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_OBJECT__GETREAL;
Asm4d_Proc proc_PAL__UPDATE__PAGE__SETSIZE;
Asm4d_Proc proc_PARSE__SETPAGEPROPERTYLONG;
extern unsigned char D_obj_p_PropertyPalette__Report_00vz__margin__top[];
void obj_p_PropertyPalette__Report_00vz__margin__top( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_PropertyPalette__Report_00vz__margin__top);
	if (!ctx->doingAbort) try {
		Num lvz__value;
		Long lvl__area;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (20!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Kvl__current__area.get();
			Long t3;
			c.f.fLine=6;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t3.get();
		}
		{
			Txt t4;
			t4=Kvz__margin__top.get();
			Num t5;
			c.f.fLine=8;
			proc_OBJECT__GETREAL(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Long t6;
			t6=lvl__area.get();
			Num t7;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,69).cv(),t7.cv(),t6.cv(),lvl__area.cv(),(CV*)9,t5.cv(),nullptr,(CV*)65537},2)) goto _0;
			g->Check(ctx);
			lvz__value=t7.get();
		}
		{
			Long t8;
			t8=(sLONG)lrint(lvz__value.get());
			Long t9;
			t9=11;
			Long t10;
			t10=lvl__area.get();
			c.f.fLine=9;
			proc_PARSE__SETPAGEPROPERTYLONG(glob,ctx,3,3,(PCV[]){t10.cv(),t9.cv(),t8.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t11;
			t11=lvl__area.get();
			c.f.fLine=11;
			proc_PAL__UPDATE__PAGE__SETSIZE(glob,ctx,1,1,(PCV[]){t11.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
