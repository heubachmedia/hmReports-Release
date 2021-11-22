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
Asm4d_Proc proc_OBJECT__GETPOINTER;
Asm4d_Proc proc_XLIFF__WRITELANGUAGE;
extern unsigned char D_obj_p_XLIFF_00vl__btn1[];
void obj_p_XLIFF_00vl__btn1( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_XLIFF_00vl__btn1);
	if (!ctx->doingAbort) try {
		Ptr lvp__tt__de;
		Ptr lvp__tt__en;
		Ptr lvp__tt__es;
		Ptr lvp__tt__fr;
		Ptr lvp__tt__ja;
		Ptr lvp__tt__resnames;
		{
			Long t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		{
			Txt t2;
			t2=Ktt__resnames.get();
			Ptr t3;
			c.f.fLine=5;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t2.cv()},t3.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__resnames=t3.get();
		}
		{
			Txt t4;
			t4=Ktt__de.get();
			Ptr t5;
			c.f.fLine=6;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__de=t5.get();
		}
		{
			Txt t6;
			t6=Ktt__en.get();
			Ptr t7;
			c.f.fLine=7;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t6.cv()},t7.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__en=t7.get();
		}
		{
			Txt t8;
			t8=Ktt__fr.get();
			Ptr t9;
			c.f.fLine=8;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t8.cv()},t9.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__fr=t9.get();
		}
		{
			Txt t10;
			t10=Ktt__es.get();
			Ptr t11;
			c.f.fLine=9;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t10.cv()},t11.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__es=t11.get();
		}
		{
			Txt t12;
			t12=Ktt__ja.get();
			Ptr t13;
			c.f.fLine=10;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t12.cv()},t13.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__ja=t13.get();
		}
		{
			Ref t14;
			c.f.fLine=12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t14.cv(),lvp__tt__ja.cv(),(PCV)-1,nullptr})) goto _0;
			Ref t15;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t15.cv(),lvp__tt__es.cv(),(PCV)-1,nullptr})) goto _0;
			Ref t16;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t16.cv(),lvp__tt__fr.cv(),(PCV)-1,nullptr})) goto _0;
			Ref t17;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t17.cv(),lvp__tt__en.cv(),(PCV)-1,nullptr})) goto _0;
			Ref t18;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t18.cv(),lvp__tt__de.cv(),(PCV)-1,nullptr})) goto _0;
			Ref t19;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t19.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t19.cv(),t18.cv(),t17.cv(),t16.cv(),t15.cv(),t14.cv(),Ref((optyp)5).cv()},7,229)) goto _0;
		}
		{
			Txt t20;
			t20=Kde.get();
			c.f.fLine=14;
			proc_XLIFF__WRITELANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__de.cv(),t20.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t21;
			t21=Ken.get();
			c.f.fLine=15;
			proc_XLIFF__WRITELANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__en.cv(),t21.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t22;
			t22=Kfr.get();
			c.f.fLine=16;
			proc_XLIFF__WRITELANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__fr.cv(),t22.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t23;
			t23=Kes.get();
			c.f.fLine=17;
			proc_XLIFF__WRITELANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__es.cv(),t23.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t24;
			t24=Kja.get();
			c.f.fLine=18;
			proc_XLIFF__WRITELANGUAGE(glob,ctx,2,2,(PCV[]){lvp__tt__ja.cv(),t24.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
