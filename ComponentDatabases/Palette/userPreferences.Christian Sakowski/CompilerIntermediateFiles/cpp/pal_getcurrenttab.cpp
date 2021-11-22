extern Txt Kvl__btn__database;
extern Txt kEfZk2dHwyH4;
extern Txt kxsZ_Wljgerc;
extern unsigned char D_proc_PAL__GETCURRENTTAB[];
void proc_PAL__GETCURRENTTAB( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__GETCURRENTTAB);
	if (!ctx->doingAbort) try {
		Ptr lvp__object1;
		Ptr lvp__object2;
		Ptr lvp__object3;
		Long lvl__currenttab;
		new ( outResult) Long();
		{
			Ptr t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(3).cv(),kEfZk2dHwyH4.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object1=t0.get();
		}
		{
			Ptr t1;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t1.cv(),Long(3).cv(),kxsZ_Wljgerc.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object2=t1.get();
		}
		{
			Ptr t2;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t2.cv(),Long(3).cv(),Kvl__btn__database.cv()},2,1124)) goto _0;
			g->Check(ctx);
			lvp__object3=t2.get();
		}
		{
			Variant t3;
			c.f.fLine=9;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),lvp__object1.cv(),(PCV)-1,nullptr})) goto _0;
			Bool t4;
			if (g->OperationOnAny(ctx,6,t3.cv(),Num(1).cv(),t4.cv())) goto _0;
			if (!(t4.get())) goto _3;
		}
		lvl__currenttab=1;
		goto _2;
_3:
		{
			Variant t5;
			c.f.fLine=12;
			if (!g->GetValue(ctx,(PCV[]){t5.cv(),lvp__object2.cv(),(PCV)-1,nullptr})) goto _0;
			Bool t6;
			if (g->OperationOnAny(ctx,6,t5.cv(),Num(1).cv(),t6.cv())) goto _0;
			if (!(t6.get())) goto _4;
		}
		lvl__currenttab=2;
		goto _2;
_4:
		{
			Variant t7;
			c.f.fLine=15;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),lvp__object3.cv(),(PCV)-1,nullptr})) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,6,t7.cv(),Num(1).cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _5;
		}
		lvl__currenttab=3;
		goto _2;
_5:
		lvl__currenttab=0;
_2:
		Res<Long>(outResult)=lvl__currenttab.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
