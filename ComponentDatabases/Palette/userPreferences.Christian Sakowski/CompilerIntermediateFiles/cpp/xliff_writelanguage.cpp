extern Txt K1_2E0;
extern Txt KMain_2Exlf;
extern Txt KUTF_2D8;
extern Txt K_2Elproj;
extern Txt K_3A;
extern Txt Kdatatype;
extern Txt Ken_2DUS;
extern Txt Kid;
extern Txt Koriginal;
extern Txt Kproduct_2Dversion;
extern Txt Kresname;
extern Txt Ksource;
extern Txt Ksource_2Dlanguage;
extern Txt Ktarget;
extern Txt Ktarget_2Dlanguage;
extern Txt Ktt__de;
extern Txt Ktt__resnames;
extern Txt Kundefined;
extern Txt Kv14;
extern Txt Kversion;
extern Txt Kvt__path;
extern Txt Kx_2DSTR_23;
extern Txt Kxliff;
extern Txt Kxliff_2Ffile;
extern Txt kLKxZgELaOek;
extern Txt kZ9PzaImFtZc;
Asm4d_Proc proc_OBJECT__GETPOINTER;
Asm4d_Proc proc_OBJECT__GETTEXT;
extern unsigned char D_proc_XLIFF__WRITELANGUAGE[];
void proc_XLIFF__WRITELANGUAGE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_XLIFF__WRITELANGUAGE);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Txt lvt__element2;
		Txt lvt__language;
		Ptr lvp__tt__de;
		Long li;
		Txt lvt__xml;
		Ptr lvp__tt__resnames;
		Ptr lvp__array;
		Txt lvt__element;
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
			c.f.fLine=10;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t7.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__resnames=t8.get();
		}
		{
			Txt t9;
			t9=Ktt__de.get();
			Ptr t10;
			c.f.fLine=11;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t9.cv()},t10.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__de=t10.get();
		}
		{
			Long t11;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t11.cv(),lvt__path.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t11.get()) goto _2;
		}
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__path.cv()},1,159)) goto _0;
		g->Check(ctx);
_2:
		{
			Txt t13;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t13.cv(),Kxliff.cv()},1,861)) goto _0;
			g->Check(ctx);
			lvt__xml=t13.get();
		}
		{
			Bool t14;
			t14=true;
			Bool t15;
			t15=t14.get();
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv(),KUTF_2D8.cv(),t15.cv()},3,859)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=19;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv(),Kversion.cv(),K1_2E0.cv()},3,866)) goto _0;
		g->Check(ctx);
		{
			Txt t16;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t16.cv(),lvt__xml.cv(),Kxliff_2Ffile.cv(),Kdatatype.cv(),Kx_2DSTR_23.cv(),Koriginal.cv(),Kundefined.cv(),Kproduct_2Dversion.cv(),Kv14.cv(),Ksource_2Dlanguage.cv(),Ken_2DUS.cv(),Ktarget_2Dlanguage.cv(),lvt__language.cv()},12,865)) goto _0;
			g->Check(ctx);
			lvt__element=t16.get();
		}
		{
			Txt t17;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t17.cv(),lvt__xml.cv(),kLKxZgELaOek.cv(),Kid.cv(),Long(15000).cv()},4,865)) goto _0;
			g->Check(ctx);
			lvt__element=t17.get();
		}
		li=1;
		{
			Ref t18;
			c.f.fLine=24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t18.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			Long t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv()},1,274)) goto _0;
			v0=t19.get();
		}
		goto _3;
_4:
		{
			Variant t20;
			c.f.fLine=26;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),lvp__tt__resnames.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Txt t21;
			if (g->Call(ctx,(PCV[]){t21.cv(),lvt__xml.cv(),kZ9PzaImFtZc.cv(),Kresname.cv(),t20.cv()},4,865)) goto _0;
			g->Check(ctx);
			lvt__element=t21.get();
		}
		{
			Txt t22;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t22.cv(),lvt__element.cv(),Ksource.cv()},2,865)) goto _0;
			g->Check(ctx);
			lvt__element2=t22.get();
		}
		{
			Variant t23;
			c.f.fLine=28;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),lvp__tt__de.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element2.cv(),t23.cv()},2,868)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t24;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t24.cv(),lvt__element.cv(),Ktarget.cv()},2,865)) goto _0;
			g->Check(ctx);
			lvt__element2=t24.get();
		}
		{
			Variant t25;
			c.f.fLine=30;
			if (!g->GetValue(ctx,(PCV[]){t25.cv(),lvp__array.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__element2.cv(),t25.cv()},2,868)) goto _0;
			g->Check(ctx);
		}
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		c.f.fLine=34;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv(),lvt__path.cv()},2,862)) goto _0;
		g->Check(ctx);
		c.f.fLine=35;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv()},1,722)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
