extern unsigned char D_proc_ARR__FIND2INARRAY[];
void proc_ARR__FIND2INARRAY( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_ARR__FIND2INARRAY);
	if (!ctx->doingAbort) try {
		Ptr lvp__array1;
		Ptr lvp__array2;
		Long lvl__long1;
		Long lvl__long2;
		Long lvl__pos;
		Long lvl__result;
		new ( outResult) Long();
		lvp__array1=Parm<Ptr>(inParams,inNbParam,1).get();
		lvp__array2=Parm<Ptr>(inParams,inNbParam,2).get();
		lvl__long1=Parm<Long>(inParams,inNbParam,3).get();
		lvl__long2=Parm<Long>(inParams,inNbParam,4).get();
		{
			Long t0;
			t0=inNbExplicitParam;
			if (4>=t0.get()) goto _2;
		}
		lvl__pos=Parm<Long>(inParams,inNbParam,5).get()-1;
		goto _3;
_2:
		lvl__pos=0;
_3:
		lvl__result=-1;
_4:
		{
			Long t3;
			t3=lvl__pos.get()+1;
			Ref t4;
			c.f.fLine=24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t4.cv(),lvp__array1.cv(),(PCV)-1,nullptr})) goto _0;
			Long t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),lvl__long1.cv(),t3.cv()},3,230)) goto _0;
			lvl__pos=t5.get();
		}
		if (0>=lvl__pos.get()) goto _5;
		{
			Variant t7;
			c.f.fLine=26;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),lvp__array2.cv(),(PCV)-1,lvl__pos.cv(),nullptr})) goto _0;
			Bool t8;
			if (g->OperationOnAny(ctx,6,t7.cv(),lvl__long2.cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _6;
		}
		lvl__result=lvl__pos.get();
		lvl__pos=-1;
_6:
_5:
		if (0<=lvl__pos.get()) goto _4;
		Res<Long>(outResult)=lvl__result.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
