extern int32_t veExt1;
extern Txt K;
extern Txt k8$fcJ4UD4ng;
extern Txt k9feMXgSP0Y4;
extern Txt kr97ZXBnS8v4;
extern Txt krkeTfVvePK0;
extern Txt kyHVMw6QSujU;
extern unsigned char D_obj_p_Testarea_00bbtn[];
void obj_p_Testarea_00bbtn( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_obj_p_Testarea_00bbtn);
	if (!ctx->doingAbort) try {
		Blb lvx__blob;
		Txt lvt__path;
		{
			Long t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (4!=t0.get()) goto _2;
		}
		lvt__path=krkeTfVvePK0.get();
		lvt__path=k8$fcJ4UD4ng.get();
		lvt__path=kr97ZXBnS8v4.get();
		lvt__path=k9feMXgSP0Y4.get();
		{
			Txt t2;
			t2=kyHVMw6QSujU.get();
			Long t3;
			t3=0;
			Long t4;
			t4=9;
			Long t5;
			t5=Var<Long>(ctx,veExt1).get();
			c.f.fLine=59;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,66).cv(),nullptr,t5.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t4.cv(),nullptr,(CV*)9,t3.cv(),nullptr,(CV*)9,t2.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t6;
			t6.setLocalRef(ctx,lvx__blob.cv());
			c.f.fLine=61;
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),Long(0).cv()},2,606)) goto _0;
		}
		{
			Ref t7;
			t7.setLocalRef(ctx,lvx__blob.cv());
			c.f.fLine=62;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__path.cv(),t7.cv()},2,525)) goto _0;
			g->Check(ctx);
		}
		{
			Blb t8;
			t8=lvx__blob.get();
			Long t9;
			t9=2;
			Long t10;
			t10=Var<Long>(ctx,veExt1).get();
			c.f.fLine=63;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,49).cv(),nullptr,t10.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t9.cv(),nullptr,(CV*)9,t8.cv(),lvx__blob.cv(),nullptr},3)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t11;
			t11=K.get();
			Long t12;
			t12=0;
			Long t13;
			t13=14;
			Long t14;
			t14=Var<Long>(ctx,veExt1).get();
			c.f.fLine=69;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,20).cv(),nullptr,t14.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t13.cv(),nullptr,(CV*)9,t12.cv(),nullptr,(CV*)9,t11.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t15;
			t15=K.get();
			Long t16;
			t16=0;
			Long t17;
			t17=15;
			Long t18;
			t18=Var<Long>(ctx,veExt1).get();
			c.f.fLine=70;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,20).cv(),nullptr,t18.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t17.cv(),nullptr,(CV*)9,t16.cv(),nullptr,(CV*)9,t15.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t19;
			t19=K.get();
			Long t20;
			t20=0;
			Long t21;
			t21=16;
			Long t22;
			t22=Var<Long>(ctx,veExt1).get();
			c.f.fLine=71;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,20).cv(),nullptr,t22.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t21.cv(),nullptr,(CV*)9,t20.cv(),nullptr,(CV*)9,t19.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
