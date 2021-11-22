extern Txt KKeine;
extern Txt K_2D;
extern Txt K_2F;
extern Txt Kgrow;
extern Txt Kklapp__allgemein;
extern Txt Kklapp__groesse;
extern Txt Kklapp__optionen;
extern Txt Kklapp__rahmen;
extern Txt Kklapp__text;
extern Txt Kmove;
extern Txt Kname;
extern Txt Kname_20asc;
extern Txt KorderBy;
extern Txt Ksymbology;
extern Txt Ktl__barcode;
extern Txt Ktl__objects__top;
extern Txt Ktt__barcode;
extern Txt Ktt__fontlist;
extern Txt Ktt__objects;
extern Txt k8cOXlOUgsDM;
extern Txt kOnJH_Tq$njM;
extern Txt krCNK3qtOezs;
Asm4d_Proc proc_ARR__COPY;
Asm4d_Proc proc_ARR__RESIZE;
Asm4d_Proc proc_OBJECT__GETPOINTER;
Asm4d_Proc proc_OBJECT__INITARRAY;
Asm4d_Proc proc_OBJECT__SETLONGINT;
extern unsigned char D_proc_PAL__UPDATE__OBJECT__ONLOAD[];
void proc_PAL__UPDATE__OBJECT__ONLOAD( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__OBJECT__ONLOAD);
	if (!ctx->doingAbort) try {
		Long lvl__left;
		Long v0;
		Ptr lvp__object;
		Long v1;
		Long lvl__size;
		Long lvl__top;
		Long li;
		Value_array_pointer ltp__Variablen;
		Value_array_text ltt__Objekte;
		Col lvc__barcodes;
		Long lvl__area;
		Value_array_int ltg__Seiten;
		Long lvl__right;
		Value_array_text ltt__fontlist;
		Long lvl__bottom;
		Value_array_text ltt__barcode__Name;
		Ptr lvp__object__name;
		Value_array_longint ltl__barcode__ID;
		Ptr lvp__object__top;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Long t0;
			t0=1;
			Txt t1;
			t1=Kklapp__allgemein.get();
			c.f.fLine=7;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t1.cv(),t0.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t2;
			t2=1;
			Txt t3;
			t3=Kklapp__groesse.get();
			c.f.fLine=8;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t3.cv(),t2.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t4;
			t4=1;
			Txt t5;
			t5=Kklapp__optionen.get();
			c.f.fLine=9;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t5.cv(),t4.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t6;
			t6=1;
			Txt t7;
			t7=Kklapp__rahmen.get();
			c.f.fLine=10;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t7.cv(),t6.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t8;
			t8=1;
			Txt t9;
			t9=Kklapp__text.get();
			c.f.fLine=11;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t9.cv(),t8.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t10;
			t10=1;
			Txt t11;
			t11=krCNK3qtOezs.get();
			c.f.fLine=12;
			proc_OBJECT__SETLONGINT(glob,ctx,2,2,(PCV[]){t11.cv(),t10.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ref t12;
			t12.setLocalRef(ctx,ltt__Objekte.cv());
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){nullptr,t12.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t13;
			t13.setLocalRef(ctx,ltp__Variablen.cv());
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){nullptr,t13.cv(),Long(0).cv()},2,280)) goto _0;
		}
		{
			Ref t14;
			t14.setLocalRef(ctx,ltg__Seiten.cv());
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){nullptr,t14.cv(),Long(0).cv()},2,220)) goto _0;
		}
		{
			Ref t15;
			t15.setLocalRef(ctx,ltg__Seiten.cv());
			Ref t16;
			t16.setLocalRef(ctx,ltp__Variablen.cv());
			Ref t17;
			t17.setLocalRef(ctx,ltt__Objekte.cv());
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){nullptr,t17.cv(),t16.cv(),t15.cv()},3,898)) goto _0;
			g->Check(ctx);
		}
		{
			Long t18;
			t18=18;
			Txt t19;
			t19=Ktt__objects.get();
			Ptr t20;
			c.f.fLine=20;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t19.cv(),t18.cv()},t20.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t21;
			t21=16;
			Txt t22;
			t22=Ktl__objects__top.get();
			Ptr t23;
			c.f.fLine=21;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t22.cv(),t21.cv()},t23.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t24;
			t24=Ktt__objects.get();
			Ptr t25;
			c.f.fLine=23;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t24.cv()},t25.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__object__name=t25.get();
		}
		{
			Txt t26;
			t26=Ktl__objects__top.get();
			Ptr t27;
			c.f.fLine=24;
			proc_OBJECT__GETPOINTER(glob,ctx,1,1,(PCV[]){t26.cv()},t27.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__object__top=t27.get();
		}
		{
			Ref t28;
			t28.setLocalRef(ctx,ltt__Objekte.cv());
			Long t29;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t29.cv(),t28.cv()},1,274)) goto _0;
			lvl__size=t29.get();
		}
		{
			Ptr t30;
			t30.adopt(g->CreatePointerLocal(ctx,ltt__Objekte.cv(),-1,-1));
			Long t31;
			t31=0;
			c.f.fLine=28;
			proc_ARR__COPY(glob,ctx,2,3,(PCV[]){t30.cv(),lvp__object__name.cv(),t31.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t32;
			t32=lvl__size.get();
			c.f.fLine=29;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object__top.cv(),t32.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		li=1;
		v0=lvl__size.get();
		goto _2;
_3:
		lvl__left=0;
		lvl__top=0;
		lvl__right=0;
		lvl__bottom=0;
		{
			Ref t33;
			t33.setLocalRef(ctx,lvl__bottom.cv());
			Ref t34;
			t34.setLocalRef(ctx,lvl__right.cv());
			Ref t35;
			t35.setLocalRef(ctx,lvl__top.cv());
			Ref t36;
			t36.setLocalRef(ctx,lvl__left.cv());
			Txt t37;
			t37=ltt__Objekte.arrayElem(li.get()).get();
			Txt t38;
			t38=t37.get();
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),t38.cv(),t36.cv(),t35.cv(),t34.cv(),t33.cv()},6,663)) goto _0;
			g->Check(ctx);
		}
		{
			Long t39;
			t39=lvl__top.get();
			c.f.fLine=40;
			if (!g->SetValue(ctx,(PCV[]){t39.cv(),lvp__object__top.cv(),(PCV)-1,li.cv(),nullptr})) goto _0;
		}
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
		{
			Ref t42;
			t42.setLocalRef(ctx,ltt__fontlist.cv());
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){nullptr,t42.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t43;
			t43=lvl__area.get();
			c.f.fLine=48;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,134).cv(),nullptr,t43.cv(),lvl__area.cv(),(CV*)9,ltt__fontlist.cv(),nullptr,(CV*)65543},2)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t44;
			t44.setLocalRef(ctx,ltt__fontlist.cv());
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){nullptr,t44.cv(),Ref((optyp)5).cv()},2,229)) goto _0;
		}
		{
			Ptr t45;
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){t45.cv(),Long(3).cv(),Ktt__fontlist.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t45.get();
		}
		{
			Bool t46;
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){t46.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t47;
			t47=t46.get();
			Bool t48;
			t48=!(t47.get());
			if (!(t48.get())) goto _4;
		}
		{
			Ptr t49;
			t49.adopt(g->CreatePointerLocal(ctx,ltt__fontlist.cv(),-1,-1));
			Long t50;
			t50=0;
			c.f.fLine=53;
			proc_ARR__COPY(glob,ctx,2,3,(PCV[]){t49.cv(),lvp__object.cv(),t50.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_4:
		{
			Long t51;
			t51=18;
			Txt t52;
			t52=k8cOXlOUgsDM.get();
			Ptr t53;
			c.f.fLine=56;
			proc_OBJECT__INITARRAY(glob,ctx,2,2,(PCV[]){t52.cv(),t51.cv()},t53.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lvp__object=t53.get();
		}
		{
			Long t54;
			t54=5;
			c.f.fLine=57;
			proc_ARR__RESIZE(glob,ctx,2,2,(PCV[]){lvp__object.cv(),t54.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t55;
			c.f.fLine=59;
			if (g->Call(ctx,(PCV[]){t55.cv(),KKeine.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t55.cv(),lvp__object.cv(),(PCV)-1,Long(1).cv(),nullptr})) goto _0;
		}
		{
			Txt t56;
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){t56.cv(),kOnJH_Tq$njM.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t56.cv(),lvp__object.cv(),(PCV)-1,Long(2).cv(),nullptr})) goto _0;
		}
		{
			Txt t57;
			c.f.fLine=61;
			if (g->Call(ctx,(PCV[]){t57.cv(),Kgrow.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t57.cv(),lvp__object.cv(),(PCV)-1,Long(3).cv(),nullptr})) goto _0;
		}
		{
			Txt t58;
			c.f.fLine=62;
			if (g->Call(ctx,(PCV[]){t58.cv(),Kmove.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t58.cv(),lvp__object.cv(),(PCV)-1,Long(4).cv(),nullptr})) goto _0;
		}
		{
			Txt t59;
			c.f.fLine=63;
			if (g->Call(ctx,(PCV[]){t59.cv(),Kmove.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t60;
			g->AddString(t59.get(),K_2F.get(),t60.get());
			Txt t61;
			if (g->Call(ctx,(PCV[]){t61.cv(),Kgrow.cv()},1,991)) goto _0;
			Txt t62;
			g->AddString(t60.get(),t61.get(),t62.get());
			if (!g->SetValue(ctx,(PCV[]){t62.cv(),lvp__object.cv(),(PCV)-1,Long(5).cv(),nullptr})) goto _0;
		}
		c.f.fLine=64;
		if (!g->SetValue(ctx,(PCV[]){Num(1).cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
		{
			Ref t63;
			t63.setLocalRef(ctx,ltl__barcode__ID.cv());
			c.f.fLine=68;
			if (g->Call(ctx,(PCV[]){nullptr,t63.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t64;
			t64.setLocalRef(ctx,ltt__barcode__Name.cv());
			c.f.fLine=69;
			if (g->Call(ctx,(PCV[]){nullptr,t64.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Col t65;
			c.f.fLine=71;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,159).cv(),t65.cv()},0)) goto _0;
			g->Check(ctx);
			lvc__barcodes=t65.get();
		}
		{
			Variant t66;
			c.f.fLine=72;
			if (g->Call(ctx,(PCV[]){t66.cv(),lvc__barcodes.cv(),KorderBy.cv(),Kname_20asc.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Col t67;
			if (!g->GetValue(ctx,(PCV[]){t67.cv(),t66.cv(),nullptr})) goto _0;
			lvc__barcodes=t67.get();
		}
		{
			Ref t68;
			t68.setLocalRef(ctx,ltt__barcode__Name.cv());
			Ref t69;
			t69.setLocalRef(ctx,ltl__barcode__ID.cv());
			c.f.fLine=74;
			if (g->Call(ctx,(PCV[]){nullptr,lvc__barcodes.cv(),t69.cv(),Ksymbology.cv(),t68.cv(),Kname.cv()},5,1562)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t70;
			t70.setLocalRef(ctx,ltl__barcode__ID.cv());
			Ref t71;
			t71.setLocalRef(ctx,ltt__barcode__Name.cv());
			c.f.fLine=76;
			if (g->Call(ctx,(PCV[]){nullptr,t71.cv(),t70.cv(),Ref((optyp)5).cv()},3,229)) goto _0;
		}
		{
			Ptr t72;
			c.f.fLine=78;
			if (g->Call(ctx,(PCV[]){t72.cv(),Long(3).cv(),Ktt__barcode.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t72.get();
		}
		{
			Bool t73;
			c.f.fLine=79;
			if (g->Call(ctx,(PCV[]){t73.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t74;
			t74=t73.get();
			Bool t75;
			t75=!(t74.get());
			if (!(t75.get())) goto _5;
		}
		{
			Ptr t76;
			t76.adopt(g->CreatePointerLocal(ctx,ltt__barcode__Name.cv(),-1,-1));
			Long t77;
			t77=0;
			c.f.fLine=80;
			proc_ARR__COPY(glob,ctx,2,3,(PCV[]){t76.cv(),lvp__object.cv(),t77.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ref t78;
			c.f.fLine=82;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t78.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t78.cv(),Long(1).cv(),Long(2).cv()},3,227)) goto _0;
		}
		{
			Txt t79;
			c.f.fLine=83;
			if (g->Call(ctx,(PCV[]){t79.cv(),KKeine.cv()},1,991)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t79.cv(),lvp__object.cv(),(PCV)-1,Long(1).cv(),nullptr})) goto _0;
		}
		{
			Txt t80;
			t80=K_2D.get();
			c.f.fLine=84;
			if (!g->SetValue(ctx,(PCV[]){t80.cv(),lvp__object.cv(),(PCV)-1,Long(2).cv(),nullptr})) goto _0;
		}
_5:
		{
			Ptr t81;
			c.f.fLine=88;
			if (g->Call(ctx,(PCV[]){t81.cv(),Long(3).cv(),Ktl__barcode.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object=t81.get();
		}
		{
			Bool t82;
			c.f.fLine=89;
			if (g->Call(ctx,(PCV[]){t82.cv(),lvp__object.cv()},1,315)) goto _0;
			Bool t83;
			t83=t82.get();
			Bool t84;
			t84=!(t83.get());
			if (!(t84.get())) goto _6;
		}
		{
			Ptr t85;
			t85.adopt(g->CreatePointerLocal(ctx,ltl__barcode__ID.cv(),-1,-1));
			Long t86;
			t86=0;
			c.f.fLine=90;
			proc_ARR__COPY(glob,ctx,2,3,(PCV[]){t85.cv(),lvp__object.cv(),t86.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Ref t87;
			c.f.fLine=91;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t87.cv(),lvp__object.cv(),(PCV)-1,nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t87.cv(),Long(1).cv(),Long(2).cv()},3,227)) goto _0;
		}
_6:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
