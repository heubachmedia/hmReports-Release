extern Txt KEBENEN__;
extern Txt KOBJECTLIST;
extern Txt Kvl__btn__database;
extern Txt Kvl__current__area;
extern Txt Kvt__tab__caption1;
extern Txt Kvt__tab__caption2;
extern Txt k5_SBQhhnpDk;
extern Txt kEfZk2dHwyH4;
extern Txt kPir1c5dxdxY;
extern Txt kparGR5hM2uw;
extern Txt kxPY2TFSQVG4;
extern Txt kxsZ_Wljgerc;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__UPDATETABBAR;
extern unsigned char D_proc_PAL__SETTABBAR[];
void proc_PAL__SETTABBAR( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__SETTABBAR);
	if (!ctx->doingAbort) try {
		Long lvl__area;
		Ptr lvp__object1;
		Ptr lvp__object2;
		Long lvl__active;
		Ptr lvp__object3;
		Txt lvt__caption;
		Ptr lvp__object__tabcaption1;
		Ptr lvp__object__tabcaption2;
		lvl__active=Parm<Long>(inParams,inNbParam,1).get();
		{
			Ptr t0;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(3).cv(),kEfZk2dHwyH4.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object1=t0.get();
		}
		{
			Ptr t1;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t1.cv(),Long(3).cv(),kxsZ_Wljgerc.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t1.get();
		}
		{
			Ptr t2;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t2.cv(),Long(3).cv(),Kvl__btn__database.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object3=t2.get();
		}
		{
			Ptr t3;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t3.cv(),Long(3).cv(),Kvt__tab__caption1.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__tabcaption1=t3.get();
		}
		{
			Ptr t4;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t4.cv(),Long(3).cv(),Kvt__tab__caption2.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object__tabcaption2=t4.get();
		}
		if (1!=lvl__active.get()) goto _3;
		c.f.fLine=16;
		if (!g->SetValue(ctx,(PCV[]){Num(1).cv(),lvp__object1.cv(),(PCV)-1,nullptr})) goto _0;
		c.f.fLine=17;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
		c.f.fLine=18;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
		{
			Txt t6;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t6.cv(),KEBENEN__.cv()},1,991)) goto _0;
			g->Check(ctx);
			lvt__caption=t6.get();
		}
		goto _2;
_3:
		if (2!=lvl__active.get()) goto _4;
		c.f.fLine=22;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object1.cv(),(PCV)-1,nullptr})) goto _0;
		c.f.fLine=23;
		if (!g->SetValue(ctx,(PCV[]){Num(1).cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
		c.f.fLine=24;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
		{
			Txt t8;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t8.cv(),KOBJECTLIST.cv()},1,991)) goto _0;
			g->Check(ctx);
			lvt__caption=t8.get();
		}
		goto _2;
_4:
		if (3!=lvl__active.get()) goto _5;
		c.f.fLine=28;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object1.cv(),(PCV)-1,nullptr})) goto _0;
		c.f.fLine=29;
		if (!g->SetValue(ctx,(PCV[]){Num(0).cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
		c.f.fLine=30;
		if (!g->SetValue(ctx,(PCV[]){Num(1).cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
		{
			Txt t10;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t10.cv(),kparGR5hM2uw.cv()},1,991)) goto _0;
			g->Check(ctx);
			lvt__caption=t10.get();
		}
		goto _2;
_5:
_2:
		{
			Txt t11;
			t11=lvt__caption.get();
			c.f.fLine=35;
			if (!g->SetValue(ctx,(PCV[]){t11.cv(),lvp__object__tabcaption1.cv(),(PCV)-1,nullptr})) goto _0;
		}
		{
			Txt t12;
			t12=lvt__caption.get();
			c.f.fLine=36;
			if (!g->SetValue(ctx,(PCV[]){t12.cv(),lvp__object__tabcaption2.cv(),(PCV)-1,nullptr})) goto _0;
		}
		{
			Bool t14;
			t14=1==lvl__active.get();
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kPir1c5dxdxY.cv(),t14.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t16;
			t16=2==lvl__active.get();
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kxPY2TFSQVG4.cv(),t16.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t18;
			t18=3==lvl__active.get();
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k5_SBQhhnpDk.cv(),t18.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t19;
			t19=Kvl__current__area.get();
			Long t20;
			c.f.fLine=42;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t19.cv()},t20.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvl__area=t20.get();
		}
		{
			Long t21;
			t21=lvl__area.get();
			c.f.fLine=44;
			proc_PAL__UPDATETABBAR(glob,ctx,1,1,(PCV[]){t21.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
