extern Txt K;
extern Txt KMain_2Exlf;
extern Txt K_3A;
extern Txt Kde_2Elproj;
extern Txt Kresname;
extern Txt Ktrans_2Dunit;
extern Txt Kvt__path;
extern Txt kLKxZgELaOek;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_OBJECT__GETTEXT;
extern unsigned char D_proc_XLIFF__LOADRESNAMES[];
void proc_XLIFF__LOADRESNAMES( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_XLIFF__LOADRESNAMES);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long li;
		Txt lvt__child;
		Txt lvt__resname;
		Txt lvt__xml;
		Ptr lvp__array;
		Txt lvt__element;
		Long lvl__count;
		Txt lvt__path;
		lvp__array=Parm<Ptr>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=0;
			Txt t1;
			t1=Kvt__path.get();
			Txt t2;
			c.f.fLine=7;
			proc_OBJECT__GETTEXT(glob,ctx,1,2,(PCV[]){t1.cv(),t0.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t3;
			g->AddString(t2.get(),Kde_2Elproj.get(),t3.get());
			Txt t4;
			g->AddString(t3.get(),K_3A.get(),t4.get());
			g->AddString(t4.get(),KMain_2Exlf.get(),lvt__path.get());
		}
		{
			Long t6;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t6.cv(),lvt__path.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t6.get()) goto _2;
		}
		{
			Txt t8;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t8.cv(),lvt__path.cv()},1,719)) goto _0;
			g->Check(ctx);
			lvt__xml=t8.get();
		}
		{
			Txt t9;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t9.cv(),lvt__xml.cv(),kLKxZgELaOek.cv()},2,864)) goto _0;
			g->Check(ctx);
			lvt__element=t9.get();
		}
		{
			Long t10;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t10.cv(),lvt__element.cv(),Ktrans_2Dunit.cv()},2,726)) goto _0;
			g->Check(ctx);
			lvl__count=t10.get();
		}
		{
			Long t11;
			t11=lvl__count.get();
			c.f.fLine=17;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__array.cv(),t11.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t12;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t12.cv(),lvt__element.cv()},1,723)) goto _0;
			g->Check(ctx);
			lvt__child=t12.get();
		}
		li=1;
		v0=lvl__count.get();
		goto _3;
_4:
		lvt__resname=K.get();
		{
			Ref t13;
			t13.setLocalRef(ctx,lvt__resname.cv());
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__child.cv(),Kresname.cv(),t13.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t14;
			t14=lvt__resname.get();
			c.f.fLine=25;
			if (!g->SetValue(ctx,(PCV[]){t14.cv(),lvp__array.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		if (li.get()>=lvl__count.get()) goto _5;
		{
			Txt t16;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t16.cv(),lvt__child.cv()},1,724)) goto _0;
			g->Check(ctx);
			lvt__child=t16.get();
		}
_5:
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		c.f.fLine=33;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv()},1,722)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
