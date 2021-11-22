extern Txt K;
extern Txt KMain_2Exlf;
extern Txt K_2Elproj;
extern Txt K_3A;
extern Txt Kde;
extern Txt Kresname;
extern Txt Ktrans_2Dunit;
extern Txt Ktt__resnames;
extern Txt Kvt__path;
extern Txt kLKxZgELaOek;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_OBJECT__GETPOINTER;
Asm4d_Proc proc_OBJECT__GETTEXT;
extern unsigned char D_proc_XLIFF__LOADLANGUAGE[];
void proc_XLIFF__LOADLANGUAGE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_XLIFF__LOADLANGUAGE);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Txt lvt__language;
		Long li;
		Txt lvt__child;
		Txt lvt__resname;
		Txt lvt__child2;
		Txt lvt__xml;
		Txt lvt__text;
		Ptr lvp__tt__resnames;
		Ptr lvp__array;
		Txt lvt__element;
		Long lvl__count;
		Long lvl__pos;
		Txt lvt__path;
		lvp__array=Parm<Ptr>(inParams,inNbParam,1).get();
		lvt__language=Parm<Txt>(inParams,inNbParam,2).get();
		{
			Long t0;
			t0=0;
			Txt t1;
			t1=Kvt__path.get();
			Txt t2;
			c.f.fLine=8;
			proc_OBJECT__GETTEXT(glob,ctx,1,2,(PCV[]){t1.cv(),t0.cv()},t2.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t3;
			g->AddString(t2.get(),lvt__language.get(),t3.get());
			Txt t4;
			g->AddString(t3.get(),K_2Elproj.get(),t4.get());
			Txt t5;
			g->AddString(t4.get(),K_3A.get(),t5.get());
			g->AddString(t5.get(),KMain_2Exlf.get(),lvt__path.get());
		}
		{
			Txt t7;
			t7=Ktt__resnames.get();
			Ptr t8;
			c.f.fLine=9;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t7.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__resnames=t8.get();
		}
		{
			Long t9;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t9.cv(),lvt__path.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t9.get()) goto _2;
		}
		{
			Txt t11;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t11.cv(),lvt__path.cv()},1,719)) goto _0;
			g->Check(ctx);
			lvt__xml=t11.get();
		}
		{
			Txt t12;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t12.cv(),lvt__xml.cv(),kLKxZgELaOek.cv()},2,864)) goto _0;
			g->Check(ctx);
			lvt__element=t12.get();
		}
		{
			Long t13;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t13.cv(),lvt__element.cv(),Ktrans_2Dunit.cv()},2,726)) goto _0;
			g->Check(ctx);
			lvl__count=t13.get();
		}
		{
			Ref t14;
			c.f.fLine=19;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t14.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			Long t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv()},1,274)) goto _0;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__array.cv(),t15.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t16;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t16.cv(),lvt__element.cv()},1,723)) goto _0;
			g->Check(ctx);
			lvt__child=t16.get();
		}
		li=1;
		v0=lvl__count.get();
		goto _3;
_4:
		lvt__resname=K.get();
		{
			Ref t17;
			t17.setLocalRef(ctx,lvt__resname.cv());
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__child.cv(),Kresname.cv(),t17.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t18;
			c.f.fLine=28;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t18.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			Long t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv(),lvt__resname.cv()},2,230)) goto _0;
			lvl__pos=t19.get();
		}
		if (0>=lvl__pos.get()) goto _5;
		{
			Txt t21;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t21.cv(),lvt__child.cv()},1,723)) goto _0;
			g->Check(ctx);
			lvt__child2=t21.get();
		}
		{
			Bool t22;
			t22=g->CompareString(ctx,lvt__language.get(),Kde.get())!=0;
			if (!(t22.get())) goto _6;
		}
		{
			Txt t23;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t23.cv(),lvt__child2.cv()},1,724)) goto _0;
			g->Check(ctx);
			lvt__child2=t23.get();
		}
_6:
		lvt__text=K.get();
		{
			Ref t24;
			t24.setLocalRef(ctx,lvt__text.cv());
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__child2.cv(),t24.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t25;
			t25=lvt__text.get();
			c.f.fLine=40;
			if (!g->SetValue(ctx,(PCV[]){t25.cv(),lvp__array.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
		}
		goto _7;
_5:
_7:
		if (li.get()>=lvl__count.get()) goto _8;
		{
			Txt t27;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t27.cv(),lvt__child.cv()},1,724)) goto _0;
			g->Check(ctx);
			lvt__child=t27.get();
		}
_8:
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		c.f.fLine=52;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv()},1,722)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
