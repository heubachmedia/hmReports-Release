extern Txt k4IrLo6b8Ok8;
extern Txt kEuDum6AQAGs;
extern Txt kND4z4yV0og4;
extern Txt kZyTsyMBzWrQ;
extern Txt kkCHCWt13GYI;
extern Txt kn9hLHdvrWQ8;
extern Txt kwC5Zy43d3YY;
extern Txt kwswSrHFilS8;
Asm4d_Proc proc_OBJECT__SETTEXT;
extern unsigned char D_proc_PAL__UPDATE__PROPERTIES[];
void proc_PAL__UPDATE__PROPERTIES( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_PAL__UPDATE__PROPERTIES);
	if (!ctx->doingAbort) try {
		Value_array_longint ltl__selected__objects;
		Long lvl__area;
		Bool lvf__update;
		lvl__area=Parm<Long>(inParams,inNbParam,1).get();
		{
			Bool t0;
			t0=true;
			lvf__update=t0.get();
		}
		{
			Ref t1;
			t1.setLocalRef(ctx,ltl__selected__objects.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,t1.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Long t2;
			t2=1;
			Long t3;
			t3=3;
			Long t4;
			t4=lvl__area.get();
			c.f.fLine=9;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,31).cv(),nullptr,t4.cv(),lvl__area.cv(),(CV*)9,t3.cv(),nullptr,(CV*)9,t2.cv(),nullptr,(CV*)9,ltl__selected__objects.cv(),nullptr,(CV*)65543},4)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t5;
			t5.setLocalRef(ctx,ltl__selected__objects.cv());
			Long t6;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv()},1,274)) goto _0;
			if (0>=t6.get()) goto _3;
		}
		{
			Bool t8;
			t8=false;
			Bool t9;
			t9=t8.get();
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kwswSrHFilS8.cv(),t9.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t10;
			t10=true;
			Bool t11;
			t11=t10.get();
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kEuDum6AQAGs.cv(),t11.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t12;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t12.cv(),kn9hLHdvrWQ8.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t13;
			t13=kkCHCWt13GYI.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t13.cv(),t12.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t14;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t14.cv(),kn9hLHdvrWQ8.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t15;
			t15=k4IrLo6b8Ok8.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t15.cv(),t14.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		if (!(lvf__update.get())) goto _4;
		c.f.fLine=22;
		if (g->Call(ctx,(PCV[]){nullptr,kEuDum6AQAGs.cv(),kND4z4yV0og4.cv(),Ref((optyp)3).cv(),lvl__area.cv()},4,1085)) goto _0;
		g->Check(ctx);
_4:
		goto _2;
_3:
		{
			Bool t16;
			t16=true;
			Bool t17;
			t17=t16.get();
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kwswSrHFilS8.cv(),t17.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t18;
			t18=false;
			Bool t19;
			t19=t18.get();
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){nullptr,Ref((optyp)3).cv(),kEuDum6AQAGs.cv(),t19.cv()},3,603)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t20;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t20.cv(),kZyTsyMBzWrQ.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t21;
			t21=kkCHCWt13GYI.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t21.cv(),t20.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		{
			Txt t22;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t22.cv(),kZyTsyMBzWrQ.cv()},1,991)) goto _0;
			g->Check(ctx);
			Txt t23;
			t23=k4IrLo6b8Ok8.get();
			proc_OBJECT__SETTEXT(glob,ctx,2,2,(PCV[]){t23.cv(),t22.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		if (!(lvf__update.get())) goto _5;
		c.f.fLine=36;
		if (g->Call(ctx,(PCV[]){nullptr,kwswSrHFilS8.cv(),kwC5Zy43d3YY.cv(),Ref((optyp)3).cv(),lvl__area.cv()},4,1085)) goto _0;
		g->Check(ctx);
_5:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
