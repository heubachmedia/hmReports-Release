extern int32_t vtf__invisible;
extern Txt K_40;
extern Txt Ktt__de;
extern Txt Ktt__en;
extern Txt Ktt__es;
extern Txt Ktt__fr;
extern Txt Ktt__ja;
extern Txt Ktt__resnames;
Asm4d_Proc proc_OBJECT__GETPOINTER;
extern unsigned char D_obj_p_XLIFF_00vt__suche[];
void obj_p_XLIFF_00vt__suche( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_XLIFF_00vt__suche);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Ptr lvp__tt__de;
		Long li;
		Ptr lvp__tt__en;
		Ptr lvp__tt__es;
		Ptr lvp__tt__fr;
		Ptr lvp__tt__ja;
		Txt lvt__text;
		Ptr lvp__tt__resnames;
		{
			Long t0;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (45!=t0.get()) goto _2;
		}
		{
			Txt t2;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,655)) goto _0;
			g->Check(ctx);
			lvt__text=t2.get();
		}
		{
			Long t3;
			t3=lvt__text.get().fLength;
			if (0>=t3.get()) goto _3;
		}
		{
			Txt t5;
			g->AddString(K_40.get(),lvt__text.get(),t5.get());
			g->AddString(t5.get(),K_40.get(),lvt__text.get());
		}
_3:
		{
			Txt t7;
			t7=Ktt__resnames.get();
			Ptr t8;
			c.f.fLine=13;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t7.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__resnames=t8.get();
		}
		{
			Txt t9;
			t9=Ktt__de.get();
			Ptr t10;
			c.f.fLine=14;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t9.cv()},t10.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__de=t10.get();
		}
		{
			Txt t11;
			t11=Ktt__en.get();
			Ptr t12;
			c.f.fLine=15;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t11.cv()},t12.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__en=t12.get();
		}
		{
			Txt t13;
			t13=Ktt__fr.get();
			Ptr t14;
			c.f.fLine=16;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t13.cv()},t14.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__fr=t14.get();
		}
		{
			Txt t15;
			t15=Ktt__es.get();
			Ptr t16;
			c.f.fLine=17;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t15.cv()},t16.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__es=t16.get();
		}
		{
			Txt t17;
			t17=Ktt__ja.get();
			Ptr t18;
			c.f.fLine=18;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t17.cv()},t18.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__tt__ja=t18.get();
		}
		li=1;
		{
			Ref t19;
			c.f.fLine=20;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t19.cv(),lvp__tt__resnames.cv(),(PCV)-1,nullptr})) goto _0;
			Long t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv()},1,274)) goto _0;
			v0=t20.get();
		}
		goto _4;
_5:
		{
			Long t21;
			t21=lvt__text.get().fLength;
			if (0!=t21.get()) goto _6;
		}
		{
			Bool t23;
			t23=false;
			Var<Value_array_bool>(ctx,vtf__invisible).arrayElem(li.get())=t23.get();
			Touch(ctx,vtf__invisible);
		}
		goto _7;
_6:
		{
			Variant t24;
			c.f.fLine=28;
			if (!g->GetValue(ctx,(PCV[]){t24.cv(),lvp__tt__resnames.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t25;
			if (g->OperationOnAny(ctx,6,t24.cv(),lvt__text.cv(),t25.cv())) goto _0;
			Variant t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),lvp__tt__de.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t27;
			if (g->OperationOnAny(ctx,6,t26.cv(),lvt__text.cv(),t27.cv())) goto _0;
			Bool t28;
			t28=t25.get()||t27.get();
			Variant t29;
			if (!g->GetValue(ctx,(PCV[]){t29.cv(),lvp__tt__en.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t30;
			if (g->OperationOnAny(ctx,6,t29.cv(),lvt__text.cv(),t30.cv())) goto _0;
			Bool t31;
			t31=t28.get()||t30.get();
			Variant t32;
			if (!g->GetValue(ctx,(PCV[]){t32.cv(),lvp__tt__fr.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t33;
			if (g->OperationOnAny(ctx,6,t32.cv(),lvt__text.cv(),t33.cv())) goto _0;
			Bool t34;
			t34=t31.get()||t33.get();
			Variant t35;
			if (!g->GetValue(ctx,(PCV[]){t35.cv(),lvp__tt__es.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t36;
			if (g->OperationOnAny(ctx,6,t35.cv(),lvt__text.cv(),t36.cv())) goto _0;
			Bool t37;
			t37=t34.get()||t36.get();
			Variant t38;
			if (!g->GetValue(ctx,(PCV[]){t38.cv(),lvp__tt__ja.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
			Bool t39;
			if (g->OperationOnAny(ctx,6,t38.cv(),lvt__text.cv(),t39.cv())) goto _0;
			Bool t41;
			t41=t37.get()||t39.get();
			Bool t42;
			t42=!(t41.get());
			Var<Value_array_bool>(ctx,vtf__invisible).arrayElem(li.get())=t42.get();
			Touch(ctx,vtf__invisible);
		}
_7:
		li=li.get()+1;
_4:
		if (li.get()<=v0.get()) goto _5;
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
