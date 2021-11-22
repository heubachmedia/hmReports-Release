extern Txt K;
extern Txt Kde;
extern Txt Kresname;
extern Txt Ktrans_2Dunit;
extern Txt kLKxZgELaOek;
Asm4d_Proc proc_ARR__RESIZE;
extern unsigned char D_proc_XLIFF__COMPAREFILES2[];
void proc_XLIFF__COMPAREFILES2( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_XLIFF__COMPAREFILES2);
	if (!ctx->doingAbort) try {
		Long v0;
		Ptr lvp__array__contents;
		Long v1;
		Txt lvt__language;
		Long li;
		Txt lvt__child;
		Txt lvt__resname;
		Txt lvt__child2;
		Txt lvt__xml;
		Txt lvt__text;
		Ptr lvp__array;
		Txt lvt__element;
		Long lvl__count;
		Txt lvt__path;
		lvp__array=Parm<Ptr>(inParams,inNbParam,1).get();
		lvp__array__contents=Parm<Ptr>(inParams,inNbParam,2).get();
		lvt__path=Parm<Txt>(inParams,inNbParam,3).get();
		{
			Long t0;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t0.cv(),lvt__path.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t0.get()) goto _2;
		}
		{
			Txt t2;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t2.cv(),lvt__path.cv()},1,719)) goto _0;
			g->Check(ctx);
			lvt__xml=t2.get();
		}
		{
			Txt t3;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t3.cv(),lvt__xml.cv(),kLKxZgELaOek.cv()},2,864)) goto _0;
			g->Check(ctx);
			lvt__element=t3.get();
		}
		{
			Long t4;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t4.cv(),lvt__element.cv(),Ktrans_2Dunit.cv()},2,726)) goto _0;
			g->Check(ctx);
			lvl__count=t4.get();
		}
		{
			Long t5;
			t5=lvl__count.get();
			c.f.fLine=17;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__array.cv(),t5.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t6;
			t6=lvl__count.get();
			c.f.fLine=18;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__array__contents.cv(),t6.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t7;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t7.cv(),lvt__element.cv()},1,723)) goto _0;
			g->Check(ctx);
			lvt__child=t7.get();
		}
		li=1;
		v0=lvl__count.get();
		goto _3;
_4:
		lvt__resname=K.get();
		{
			Ref t8;
			t8.setLocalRef(ctx,lvt__resname.cv());
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__child.cv(),Kresname.cv(),t8.cv()},3,728)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t9;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t9.cv(),lvt__child.cv()},1,723)) goto _0;
			g->Check(ctx);
			lvt__child2=t9.get();
		}
		{
			Bool t10;
			t10=g->CompareString(ctx,lvt__language.get(),Kde.get())!=0;
			if (!(t10.get())) goto _5;
		}
		{
			Txt t11;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t11.cv(),lvt__child2.cv()},1,724)) goto _0;
			g->Check(ctx);
			lvt__child2=t11.get();
		}
_5:
		lvt__text=K.get();
		{
			Ref t12;
			t12.setLocalRef(ctx,lvt__text.cv());
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__child2.cv(),t12.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t13;
			t13=lvt__text.get();
			c.f.fLine=35;
			if (!g->SetValue(ctx,(PCV[]){t13.cv(),lvp__array__contents.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		{
			Txt t14;
			t14=lvt__resname.get();
			c.f.fLine=36;
			if (!g->SetValue(ctx,(PCV[]){t14.cv(),lvp__array.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		if (li.get()>=lvl__count.get()) goto _6;
		{
			Txt t16;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t16.cv(),lvt__child.cv()},1,724)) goto _0;
			g->Check(ctx);
			lvt__child=t16.get();
		}
_6:
		li=li.get()+1;
_3:
		if (li.get()<=v0.get()) goto _4;
		c.f.fLine=44;
		if (g->Call(ctx,(PCV[]){nullptr,lvt__xml.cv()},1,722)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
