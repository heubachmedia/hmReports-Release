extern Txt Kklapp__allgemein;
extern Txt Kklapp__groesse;
extern Txt Kklapp__optionen;
extern Txt Kklapp__rahmen;
extern Txt Kklapp__text;
extern Txt krCNK3qtOezs;
Asm4d_Proc proc_OBJECT__GETLONGINT;
Asm4d_Proc proc_PAL__GET__OBJECTS__WITH__POSITION;
Asm4d_Proc proc_PAL__MOVE__OBJECTS;
Asm4d_Proc proc_PAL__SET__OBJECTS__VISIBLE;
Asm4d_Proc proc_PAL__UPDATE__OBJECT;
extern unsigned char D_proc_PAL__SET__OBJECT__POSITIONS[];
void proc_PAL__SET__OBJECT__POSITIONS( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__SET__OBJECT__POSITIONS);
	if (!ctx->doingAbort) try {
		Long v0;
		Value_array_text ltt__areas;
		Long v1;
		Long li;
		Value_array_int ltg__area__pos1;
		Value_array_int ltg__area__pos2;
		Long lvl__area;
		Long lvl__move__offset;
		Value_array_text ltt__objects;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Ref t0;
			t0.setLocalRef(ctx,ltt__areas.cv());
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){nullptr,t0.cv(),Long(6).cv()},2,222)) goto _0;
		}
		{
			Ref t1;
			t1.setLocalRef(ctx,ltg__area__pos1.cv());
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){nullptr,t1.cv(),Long(6).cv()},2,220)) goto _0;
		}
		{
			Ref t2;
			t2.setLocalRef(ctx,ltg__area__pos2.cv());
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){nullptr,t2.cv(),Long(6).cv()},2,220)) goto _0;
		}
		{
			Txt t3;
			t3=Kklapp__allgemein.get();
			ltt__areas.arrayElem(1)=t3.get();
		}
		ltg__area__pos1.arrayElem(1)=20;
		ltg__area__pos2.arrayElem(1)=90;
		{
			Txt t4;
			t4=Kklapp__groesse.get();
			ltt__areas.arrayElem(2)=t4.get();
		}
		ltg__area__pos1.arrayElem(2)=110;
		ltg__area__pos2.arrayElem(2)=160;
		{
			Txt t5;
			t5=Kklapp__optionen.get();
			ltt__areas.arrayElem(3)=t5.get();
		}
		ltg__area__pos1.arrayElem(3)=180;
		ltg__area__pos2.arrayElem(3)=350;
		{
			Txt t6;
			t6=Kklapp__rahmen.get();
			ltt__areas.arrayElem(4)=t6.get();
		}
		ltg__area__pos1.arrayElem(4)=370;
		ltg__area__pos2.arrayElem(4)=540;
		{
			Txt t7;
			t7=Kklapp__text.get();
			ltt__areas.arrayElem(5)=t7.get();
		}
		ltg__area__pos1.arrayElem(5)=560;
		ltg__area__pos2.arrayElem(5)=790;
		{
			Txt t8;
			t8=krCNK3qtOezs.get();
			ltt__areas.arrayElem(6)=t8.get();
		}
		ltg__area__pos1.arrayElem(6)=810;
		ltg__area__pos2.arrayElem(6)=860;
		lvl__move__offset=0;
		li=1;
		{
			Ref t9;
			t9.setLocalRef(ctx,ltt__areas.cv());
			Long t10;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,274)) goto _0;
			v0=t10.get();
		}
		goto _2;
_3:
		{
			Ref t11;
			t11.setLocalRef(ctx,ltt__objects.cv());
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){nullptr,t11.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t12;
			t12=ltg__area__pos2.arrayElem(li.get()).get()-1;
			Ptr t13;
			t13.adopt(g->CreatePointerLocal(ctx,ltt__objects.cv(),-1,-1));
			Long t14;
			t14=ltg__area__pos1.arrayElem(li.get()).get();
			c.f.fLine=38;
			proc_PAL__GET__OBJECTS__WITH__POSITION(glob,ctx,3,3,(PCV[]){t14.cv(),t12.cv(),t13.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t15;
			t15=ltg__area__pos1.arrayElem(li.get()).get()-20;
			Long t16;
			t16=lvl__move__offset.get();
			Long t17;
			t17=ltg__area__pos2.arrayElem(li.get()).get();
			c.f.fLine=40;
			proc_PAL__MOVE__OBJECTS(glob,ctx,3,3,(PCV[]){t15.cv(),t17.cv(),t16.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t18;
			t18=ltt__areas.arrayElem(li.get()).get();
			Txt t19;
			t19=t18.get();
			Long t20;
			c.f.fLine=42;
			proc_OBJECT__GETLONGINT(glob,ctx,1,1,(PCV[]){t19.cv()},t20.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Bool t21;
			t21=1==t20.get();
			if (!(t21.get())) goto _4;
		}
		{
			Ptr t22;
			t22.adopt(g->CreatePointerLocal(ctx,ltt__objects.cv(),-1,-1));
			Bool t23;
			t23=true;
			Bool t24;
			t24=t23.get();
			c.f.fLine=44;
			proc_PAL__SET__OBJECTS__VISIBLE(glob,ctx,2,2,(PCV[]){t22.cv(),t24.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _5;
_4:
		{
			Ptr t25;
			t25.adopt(g->CreatePointerLocal(ctx,ltt__objects.cv(),-1,-1));
			Bool t26;
			t26=false;
			Bool t27;
			t27=t26.get();
			c.f.fLine=48;
			proc_PAL__SET__OBJECTS__VISIBLE(glob,ctx,2,2,(PCV[]){t25.cv(),t27.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Long t28;
			t28=ltg__area__pos2.arrayElem(li.get()).get()-ltg__area__pos1.arrayElem(li.get()).get();
			lvl__move__offset=lvl__move__offset.get()+t28.get();
		}
_5:
		li=li.get()+1;
_2:
		if (li.get()<=v0.get()) goto _3;
		{
			Txt t32;
			Long t33;
			t33=lvl__area.get();
			c.f.fLine=56;
			proc_PAL__UPDATE__OBJECT(glob,ctx,1,2,(PCV[]){t33.cv(),t32.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
