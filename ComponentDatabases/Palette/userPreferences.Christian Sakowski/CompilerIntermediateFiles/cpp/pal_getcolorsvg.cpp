extern Txt K_2Fsvg_2Frect;
extern Txt Kfill;
extern Txt Kheight;
extern Txt Knone;
extern Txt Kstroke;
extern Txt Ksvg;
extern Txt Kwidth;
extern Txt Kx;
extern Txt Kxmlns;
extern Txt Kxmlns_3Axlink;
extern Txt Ky;
extern Txt k$f3CWpUklM4;
extern Txt kRjLLCmtpcPU;
Asm4d_Proc proc_INTERN__CONVERTCOLORFROMLONG;
extern unsigned char D_proc_PAL__GETCOLORSVG[];
void proc_PAL__GETCOLORSVG( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__GETCOLORSVG);
	if (!ctx->doingAbort) try {
		Long lvl__fillcolor;
		Txt lvt__ref;
		Txt lvt__area;
		Txt lvt__fillcolor;
		Pic lvb__picture;
		new ( outResult) Pic();
		lvl__fillcolor=Parm<Long>(inParams,inNbParam,1).get();
		{
			Txt t0;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t0.cv(),Ksvg.cv()},1,861)) goto _0;
			g->Check(ctx);
			lvt__area=t0.get();
		}
		c.f.fLine=9;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__area.cv(),Kxmlns.cv(),k$f3CWpUklM4.cv(),Kxmlns_3Axlink.cv(),kRjLLCmtpcPU.cv()},5,866)) goto _0;
		g->Check(ctx);
		c.f.fLine=11;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__area.cv(),Kwidth.cv(),Long(20).cv(),Kheight.cv(),Long(20).cv()},5,866)) goto _0;
		g->Check(ctx);
		{
			Long t1;
			t1=lvl__fillcolor.get();
			Txt t2;
			c.f.fLine=13;
			proc_INTERN__CONVERTCOLORFROMLONG(glob,ctx,1,1,(PCV[]){t1.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvt__fillcolor=t2.get();
		}
		{
			Txt t3;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t3.cv(),lvt__area.cv(),K_2Fsvg_2Frect.cv(),Kx.cv(),Long(0).cv(),Ky.cv(),Long(0).cv(),Kwidth.cv(),Long(20).cv(),Kheight.cv(),Long(20).cv(),Kstroke.cv(),Knone.cv(),Kfill.cv(),lvt__fillcolor.cv()},14,865)) goto _0;
			g->Check(ctx);
			lvt__ref=t3.get();
		}
		{
			Ref t4;
			t4.setLocalRef(ctx,lvb__picture.cv());
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__area.cv(),t4.cv(),Long(2).cv()},3,1017)) goto _0;
			g->Check(ctx);
		}
		Res<Pic>(outResult)=lvb__picture.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
