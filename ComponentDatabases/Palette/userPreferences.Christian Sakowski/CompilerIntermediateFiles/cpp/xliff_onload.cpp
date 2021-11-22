extern int32_t vtf__invisible;
extern Txt K;
extern Txt Kde;
extern Txt Ken;
extern Txt Kes;
extern Txt Kfr;
extern Txt Kja;
extern Txt Ktt__de;
extern Txt Ktt__en;
extern Txt Ktt__es;
extern Txt Ktt__fr;
extern Txt Ktt__ja;
extern Txt Ktt__resnames;
extern Txt Kvt__path;
extern Txt Kvt__suche;
extern Txt k5oLbMg02EH4;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_OBJECT__INITARRAY;
Asm4d_Proc proc_OBJECT__SETTEXT;
Asm4d_Proc proc_XLIFF__LOADLANGUAGE;
Asm4d_Proc proc_XLIFF__LOADRESNAMES;
extern unsigned char D_proc_XLIFF__ONLOAD[];
void proc_XLIFF__ONLOAD( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_XLIFF__ONLOAD);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Long lvl__size;
		Ptr lvp__tt__de;
		Long li;
		Ptr lvp__tt__en;
		Ptr lvp__tt__es;
		Ptr lvp__tt__fr;
		Ptr lvp__tt__ja;
		Ptr lvp__tt__resnames;
		Txt lvt__path;
		lvt__path=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Txt t0;
			t0=lvt__path.get();
			Txt t1;
			t1=Kvt__path.get();
			c.f.fLine=7;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t2;
			t2=18;
			Txt t3;
			t3=Ktt__resnames.get();
			Ptr t4;
			c.f.fLine=9;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t3.cv(),t2.cv()},t4.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__resnames=t4.get();
		}
		{
			Long t5;
			t5=18;
			Txt t6;
			t6=Ktt__de.get();
			Ptr t7;
			c.f.fLine=10;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t6.cv(),t5.cv()},t7.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__de=t7.get();
		}
		{
			Long t8;
			t8=18;
			Txt t9;
			t9=Ktt__en.get();
			Ptr t10;
			c.f.fLine=11;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t9.cv(),t8.cv()},t10.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__en=t10.get();
		}
		{
			Long t11;
			t11=18;
			Txt t12;
			t12=Ktt__fr.get();
			Ptr t13;
			c.f.fLine=12;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t12.cv(),t11.cv()},t13.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__fr=t13.get();
		}
		{
			Long t14;
			t14=18;
			Txt t15;
			t15=Ktt__es.get();
			Ptr t16;
			c.f.fLine=13;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t15.cv(),t14.cv()},t16.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__es=t16.get();
		}
		{
			Long t17;
			t17=18;
			Txt t18;
			t18=Ktt__ja.get();
			Ptr t19;
			c.f.fLine=14;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t18.cv(),t17.cv()},t19.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__ja=t19.get();
		}
		c.f.fLine=15;
		if (g->Call(ctx,(PCV[]){nullptr,Ref(ctx,vtf__invisible).cv(),Long(0).cv()},2,223)) goto _0;
		c.f.fLine=17;
		proc_XLIFF__LOADRESNAMES(glob,ctx,1,1,(PCV[]){lvp__tt__resnames.cv()},nullptr);
		if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
		if (ctx->doingAbort) goto _0;
		{
			Txt t20;
			t20=Kde.get();
			c.f.fLine=18;
			proc_XLIFF__LOADLANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__de.cv(),t20.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t21;
			t21=Ken.get();
			c.f.fLine=19;
			proc_XLIFF__LOADLANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__en.cv(),t21.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t22;
			t22=Kfr.get();
			c.f.fLine=20;
			proc_XLIFF__LOADLANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__fr.cv(),t22.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t23;
			t23=Kes.get();
			c.f.fLine=21;
			proc_XLIFF__LOADLANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__es.cv(),t23.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t24;
			t24=Kja.get();
			c.f.fLine=22;
			proc_XLIFF__LOADLANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__ja.cv(),t24.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ref t25;
			c.f.fLine=24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t25.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			Long t26;
			if (g->Call(ctx,(PCV[]){t26.cv(),t25.cv()},1,274)) goto _0;
			lvl__size=t26.get();
		}
		{
			Ptr t27;
			t27.adopt(g->CreatePointerGlobal(ctx,Var<Value_array_bool>(ctx,vtf__invisible).cv(),-1,-1));
			Long t28;
			t28=lvl__size.get();
			c.f.fLine=26;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){t27.cv(),t28.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		li=1;
		v0=lvl__size.get();
		goto _2;
_3:
		{
			Bool t29;
			t29=false;
			Var<Value_array_bool>(ctx,vtf__invisible).arrayElem(li.get())=t29.get();
			Touch(ctx,vtf__invisible);
		}
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
		c.f.fLine=32;
		if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),k5oLbMg02EH4.cv(),Long(1).cv(),Ref((optyp)5).cv()},4,916)) goto _0;
		g->Check(ctx);
		{
			Txt t32;
			t32=K.get();
			Txt t33;
			t33=Kvt__suche.get();
			c.f.fLine=34;
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t33.cv(),t32.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
