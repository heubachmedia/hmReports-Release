extern Txt KPictures;
extern Txt K_2Epng;
extern Txt K_3A;
extern unsigned char D_proc_INTERN__GETPICTURE[];
void proc_INTERN__GETPICTURE( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_INTERN__GETPICTURE);
	if (!ctx->doingAbort) try {
		Txt lvt__bildname;
		Pic lvb__picture;
		Txt lvt__path;
		new ( outResult) Pic();
		lvt__bildname=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Txt t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(6).cv()},1,485)) goto _0;
			g->Check(ctx);
			Txt t1;
			g->AddString(t0.get(),KPictures.get(),t1.get());
			Txt t2;
			g->AddString(t1.get(),K_3A.get(),t2.get());
			Txt t3;
			g->AddString(t2.get(),lvt__bildname.get(),t3.get());
			g->AddString(t3.get(),K_2Epng.get(),lvt__path.get());
		}
		{
			Long t5;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t5.cv(),lvt__path.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t5.get()) goto _2;
		}
		{
			Ref t7;
			t7.setLocalRef(ctx,lvb__picture.cv());
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){nullptr,lvt__path.cv(),t7.cv()},2,678)) goto _0;
			g->Check(ctx);
		}
_2:
		Res<Pic>(outResult)=lvb__picture.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
