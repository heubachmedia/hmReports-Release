extern Txt Kvl__current__area;
extern Txt kEuDum6AQAGs;
extern Txt kOFBYov598H4;
extern Txt krZQRSqONs1c;
Asm4d_Proc proc_OBJECT__SETLONGINT;
Asm4d_Proc proc_OBJECT__SETTEXT;
Asm4d_Proc proc_PAL__SETTABBAR;
Asm4d_Proc proc_PAL__UPDATETABBAR;
Asm4d_Proc proc_PAL__UPDATE__PROPERTIES;
extern unsigned char D_proc_PAL__UPDATE[];
void proc_PAL__UPDATE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE);
	if (!ctx->doingAbort) try {
		Long lvl__formevent;
		Long lvl__area;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		lvl__formevent=Parm<Long>(inParams,inNbParam,2).get();
		if (1!=lvl__formevent.get()) goto _2;
		{
			Long t1;
			t1=1;
			c.f.fLine=8;
			proc_PAL__SETTABBAR(glob,ctx,1,1,(PCV[]){t1.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,kEuDum6AQAGs.cv(),krZQRSqONs1c.cv(),Ref((optyp)3).cv(),lvl__area.cv()},4,1085)) goto _0;
		g->Check(ctx);
_2:
		{
			Long t2;
			t2=lvl__area.get();
			Txt t3;
			t3=Kvl__current__area.get();
			c.f.fLine=18;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t3.cv(),t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t4;
			t4=lvl__area.get();
			Txt t5;
			c.f.fLine=19;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,10).cv(),t5.cv(),t4.cv(),lvl__area.cv(),(CV*)9},1)) goto _0;
			g->Check(ctx);
			Txt t6;
			t6=kOFBYov598H4.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t6.cv(),t5.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t7;
			t7=lvl__area.get();
			c.f.fLine=21;
			proc_PAL__UPDATETABBAR(glob,ctx,1,1,(PCV[]){t7.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t8;
			t8=lvl__area.get();
			c.f.fLine=23;
			proc_PAL__UPDATE__PROPERTIES(glob,ctx,1,1,(PCV[]){t8.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
