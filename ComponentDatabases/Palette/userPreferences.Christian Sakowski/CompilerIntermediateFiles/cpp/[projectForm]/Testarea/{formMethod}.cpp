extern int32_t veExt1;
extern int32_t vvz__1;
extern int32_t vvz__2;
extern Txt K;
extern Txt KCallback;
extern Txt KDescription_20of_20;
extern Txt KTestname;
extern Txt K_23_23_23_2C_23_230;
extern Txt K_23_23_23_2C_23_230_2E00;
extern Txt K__caption;
extern Txt Kexec__testmethod;
extern Txt Kmeine__variable;
extern Txt Kmeine__variable1;
extern Txt Kmeine__variable2;
extern Txt Kmeine__variable3;
extern Txt Kvalue_20text;
extern Txt Kvl__1;
extern Txt Kvl__1__caption;
extern Txt Kvl__palette;
extern Txt Kvt__1;
extern Txt Kvt__1__caption;
extern Txt kRe7DpDUbPw4;
extern Txt k_cm$prJlJp0;
extern Txt kcMn4k6IpnTY;
Asm4d_Proc proc_HMREP__PALETTE__INSTALL;
Asm4d_Proc proc_ME__READCODESTYLES;
extern unsigned char D_form_p_Testarea[];
void form_p_Testarea( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_form_p_Testarea);
	if (!ctx->doingAbort) try {
		Long v0;
		Long lvl__groupid;
		Blb lvx__blob;
		Long v1;
		Long v2;
		Long li;
		Long lj;
		Long v3;
		Long lvl__groupid2;
		Value_array_text ltt__formatlist;
		Long lvl__id;
		Value_array_text ltt__vars;
		{
			Long t0;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (1!=t0.get()) goto _3;
		}
		c.f.fLine=8;
		proc_ME__READCODESTYLES(glob,ctx,0,0,nullptr,nullptr);
		if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
		if (ctx->doingAbort) goto _0;
		Var<Num>(ctx,vvz__1)=0x1.edccccccccccdp+6;
		Touch(ctx,vvz__1);
		Var<Num>(ctx,vvz__2)=Var<Num>(ctx,vvz__1).get();
		Touch(ctx,vvz__2);
		{
			Ref t2;
			t2.setLocalRef(ctx,ltt__formatlist.cv());
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){nullptr,t2.cv(),Long(2).cv()},2,222)) goto _0;
		}
		{
			Txt t3;
			t3=K_23_23_23_2C_23_230_2E00.get();
			ltt__formatlist.arrayElem(1)=t3.get();
		}
		{
			Txt t4;
			t4=K_23_23_23_2C_23_230.get();
			ltt__formatlist.arrayElem(2)=t4.get();
		}
		{
			Long t5;
			t5=Var<Long>(ctx,veExt1).get();
			c.f.fLine=17;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,239).cv(),nullptr,t5.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,ltt__formatlist.cv(),nullptr,(CV*)65543},2)) goto _0;
			g->Check(ctx);
		}
		{
			Date t6;
			t6=Date(0,0,0).get();
			Num t7;
			t7=123;
			Txt t8;
			t8=K.get();
			Long t9;
			t9=9;
			Txt t10;
			t10=k_cm$prJlJp0.get();
			Long t11;
			t11=Var<Long>(ctx,veExt1).get();
			c.f.fLine=19;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,220).cv(),nullptr,t11.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t10.cv(),nullptr,(CV*)33,t9.cv(),nullptr,(CV*)9,t8.cv(),nullptr,(CV*)33,t7.cv(),nullptr,(CV*)65537,t6.cv(),nullptr,(CV*)4},6)) goto _0;
			g->Check(ctx);
		}
		{
			Date t12;
			t12=Date(0,0,0).get();
			Num t13;
			t13=0;
			Txt t14;
			t14=Kvalue_20text.get();
			Long t15;
			t15=2;
			Txt t16;
			t16=Kmeine__variable.get();
			Long t17;
			t17=Var<Long>(ctx,veExt1).get();
			c.f.fLine=21;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,220).cv(),nullptr,t17.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t16.cv(),nullptr,(CV*)33,t15.cv(),nullptr,(CV*)9,t14.cv(),nullptr,(CV*)33,t13.cv(),nullptr,(CV*)65537,t12.cv(),nullptr,(CV*)4},6)) goto _0;
			g->Check(ctx);
		}
		{
			Long t18;
			t18=0;
			Long t19;
			t19=Var<Long>(ctx,veExt1).get();
			c.f.fLine=23;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,167).cv(),nullptr,t19.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t18.cv(),nullptr,(CV*)9},2)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t20;
			t20=kRe7DpDUbPw4.get();
			Long t21;
			t21=Var<Long>(ctx,veExt1).get();
			Long t22;
			c.f.fLine=25;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,208).cv(),t22.cv(),t21.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t20.cv(),nullptr,(CV*)33},2)) goto _0;
			g->Check(ctx);
			lvl__groupid=t22.get();
		}
		{
			Txt t23;
			t23=Kmeine__variable1.get();
			Txt t24;
			t24=Kmeine__variable1.get();
			Long t25;
			t25=Var<Long>(ctx,veExt1).get();
			Long t26;
			c.f.fLine=27;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,166).cv(),t26.cv(),t25.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t24.cv(),nullptr,(CV*)33,t23.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t26.get();
		}
		{
			Txt t27;
			t27=K.get();
			Long t28;
			t28=lvl__groupid.get();
			Long t29;
			t29=8;
			Long t30;
			t30=lvl__id.get();
			Long t31;
			t31=Var<Long>(ctx,veExt1).get();
			c.f.fLine=28;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,170).cv(),nullptr,t31.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t30.cv(),lvl__id.cv(),(CV*)9,t29.cv(),nullptr,(CV*)9,t28.cv(),lvl__groupid.cv(),(CV*)9,t27.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t32;
			t32=Kmeine__variable2.get();
			Txt t33;
			t33=Kmeine__variable2.get();
			Long t34;
			t34=Var<Long>(ctx,veExt1).get();
			Long t35;
			c.f.fLine=30;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,166).cv(),t35.cv(),t34.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t33.cv(),nullptr,(CV*)33,t32.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t35.get();
		}
		{
			Txt t36;
			t36=K.get();
			Long t37;
			t37=lvl__groupid.get();
			Long t38;
			t38=8;
			Long t39;
			t39=lvl__id.get();
			Long t40;
			t40=Var<Long>(ctx,veExt1).get();
			c.f.fLine=31;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,170).cv(),nullptr,t40.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t39.cv(),lvl__id.cv(),(CV*)9,t38.cv(),nullptr,(CV*)9,t37.cv(),lvl__groupid.cv(),(CV*)9,t36.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t41;
			t41=Kmeine__variable3.get();
			Txt t42;
			t42=Kmeine__variable3.get();
			Long t43;
			t43=Var<Long>(ctx,veExt1).get();
			Long t44;
			c.f.fLine=33;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,166).cv(),t44.cv(),t43.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t42.cv(),nullptr,(CV*)33,t41.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t44.get();
		}
		{
			Txt t45;
			t45=kcMn4k6IpnTY.get();
			Txt t46;
			t46=Kexec__testmethod.get();
			Long t47;
			t47=Var<Long>(ctx,veExt1).get();
			Long t48;
			c.f.fLine=35;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,223).cv(),t48.cv(),t47.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t46.cv(),nullptr,(CV*)33,t45.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t48.get();
		}
		{
			Bool t49;
			t49=true;
			if (!(t49.get())) goto _4;
		}
		{
			Ref t50;
			t50.setLocalRef(ctx,ltt__vars.cv());
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){nullptr,t50.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Long t51;
			t51=Var<Long>(ctx,veExt1).get();
			c.f.fLine=41;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,225).cv(),nullptr,t51.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,ltt__vars.cv(),nullptr,(CV*)65543},2)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t52;
			t52=K.get();
			Long t53;
			t53=0;
			Long t54;
			t54=5;
			Long t55;
			t55=Var<Long>(ctx,veExt1).get();
			c.f.fLine=47;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,66).cv(),nullptr,t55.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t54.cv(),nullptr,(CV*)9,t53.cv(),nullptr,(CV*)9,t52.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t56;
			t56=K.get();
			Long t57;
			t57=0;
			Long t58;
			t58=6;
			Long t59;
			t59=Var<Long>(ctx,veExt1).get();
			c.f.fLine=48;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,66).cv(),nullptr,t59.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t58.cv(),nullptr,(CV*)9,t57.cv(),nullptr,(CV*)9,t56.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t60;
			t60=K.get();
			Long t61;
			t61=0;
			Long t62;
			t62=12;
			Long t63;
			t63=Var<Long>(ctx,veExt1).get();
			c.f.fLine=50;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,66).cv(),nullptr,t63.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t62.cv(),nullptr,(CV*)9,t61.cv(),nullptr,(CV*)9,t60.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t64;
			t64=K.get();
			Long t65;
			t65=1;
			Long t66;
			t66=30;
			Long t67;
			t67=Var<Long>(ctx,veExt1).get();
			c.f.fLine=51;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,66).cv(),nullptr,t67.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t66.cv(),nullptr,(CV*)9,t65.cv(),nullptr,(CV*)9,t64.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t68;
			t68=K.get();
			Long t69;
			t69=-1;
			Long t70;
			t70=20;
			Long t71;
			t71=Var<Long>(ctx,veExt1).get();
			c.f.fLine=52;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,66).cv(),nullptr,t71.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t70.cv(),nullptr,(CV*)9,t69.cv(),nullptr,(CV*)9,t68.cv(),nullptr,(CV*)33},4)) goto _0;
			g->Check(ctx);
		}
		{
			Long t72;
			t72=1;
			Long t73;
			t73=29;
			Long t74;
			t74=Var<Long>(ctx,veExt1).get();
			c.f.fLine=54;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,103).cv(),nullptr,t74.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t73.cv(),nullptr,(CV*)9,t72.cv(),nullptr,(CV*)9},3)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t75;
			t75=KTestname.get();
			Long t76;
			t76=0;
			Long t77;
			t77=12;
			Long t78;
			t78=1;
			Long t79;
			t79=1;
			Long t80;
			t80=Var<Long>(ctx,veExt1).get();
			c.f.fLine=56;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,90).cv(),nullptr,t80.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t79.cv(),nullptr,(CV*)9,t78.cv(),nullptr,(CV*)9,t77.cv(),nullptr,(CV*)9,t76.cv(),nullptr,(CV*)9,t75.cv(),nullptr,(CV*)33},6)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t81;
			t81=KCallback.get();
			Long t82;
			t82=Var<Long>(ctx,veExt1).get();
			c.f.fLine=57;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,55).cv(),nullptr,t82.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t81.cv(),nullptr,(CV*)33},2)) goto _0;
			g->Check(ctx);
		}
		lvl__groupid=0;
		lvl__groupid2=0;
		{
			Txt t83;
			t83=kcMn4k6IpnTY.get();
			Txt t84;
			t84=Kexec__testmethod.get();
			Long t85;
			t85=Var<Long>(ctx,veExt1).get();
			Long t86;
			c.f.fLine=78;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,223).cv(),t86.cv(),t85.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t84.cv(),nullptr,(CV*)33,t83.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t86.get();
		}
		{
			Txt t87;
			t87=kRe7DpDUbPw4.get();
			Long t88;
			t88=Var<Long>(ctx,veExt1).get();
			Long t89;
			c.f.fLine=82;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,208).cv(),t89.cv(),t88.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t87.cv(),nullptr,(CV*)33},2)) goto _0;
			g->Check(ctx);
			lvl__groupid2=t89.get();
		}
		{
			Txt t90;
			t90=Kvt__1__caption.get();
			Txt t91;
			t91=Kvt__1.get();
			Long t92;
			t92=Var<Long>(ctx,veExt1).get();
			Long t93;
			c.f.fLine=84;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,166).cv(),t93.cv(),t92.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t91.cv(),nullptr,(CV*)33,t90.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t93.get();
		}
		{
			Txt t94;
			t94=K.get();
			Long t95;
			t95=lvl__groupid2.get();
			Long t96;
			t96=8;
			Long t97;
			t97=lvl__id.get();
			Long t98;
			t98=Var<Long>(ctx,veExt1).get();
			c.f.fLine=85;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,170).cv(),nullptr,t98.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t97.cv(),lvl__id.cv(),(CV*)9,t96.cv(),nullptr,(CV*)9,t95.cv(),lvl__groupid2.cv(),(CV*)9,t94.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t99;
			t99=Kvl__1__caption.get();
			Txt t100;
			t100=Kvl__1.get();
			Long t101;
			t101=Var<Long>(ctx,veExt1).get();
			Long t102;
			c.f.fLine=87;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,166).cv(),t102.cv(),t101.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t100.cv(),nullptr,(CV*)33,t99.cv(),nullptr,(CV*)33},3)) goto _0;
			g->Check(ctx);
			lvl__id=t102.get();
		}
		{
			Txt t103;
			t103=K.get();
			Long t104;
			t104=lvl__groupid2.get();
			Long t105;
			t105=8;
			Long t106;
			t106=lvl__id.get();
			Long t107;
			t107=Var<Long>(ctx,veExt1).get();
			c.f.fLine=88;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,170).cv(),nullptr,t107.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t106.cv(),lvl__id.cv(),(CV*)9,t105.cv(),nullptr,(CV*)9,t104.cv(),lvl__groupid2.cv(),(CV*)9,t103.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
		li=1;
		{
			Long t108;
			c.f.fLine=91;
			if (g->Call(ctx,(PCV[]){t108.cv()},0,254)) goto _0;
			g->Check(ctx);
			v0=t108.get();
		}
		goto _5;
_6:
		{
			Bool t109;
			c.f.fLine=93;
			if (g->Call(ctx,(PCV[]){t109.cv(),li.cv()},1,999)) goto _0;
			g->Check(ctx);
			if (!(t109.get())) goto _7;
		}
		{
			Txt t110;
			c.f.fLine=95;
			if (g->Call(ctx,(PCV[]){t110.cv(),li.cv()},1,256)) goto _0;
			g->Check(ctx);
			Txt t111;
			g->AddString(t110.get(),K__caption.get(),t111.get());
			Long t112;
			t112=li.get();
			Long t113;
			t113=Var<Long>(ctx,veExt1).get();
			Long t114;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,164).cv(),t114.cv(),t113.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t112.cv(),li.cv(),(CV*)9,t111.cv(),nullptr,(CV*)33},3)) goto _0;
			lvl__id=t114.get();
		}
		if (4<=li.get()) goto _8;
		{
			Txt t116;
			t116=K.get();
			Long t117;
			t117=lvl__groupid.get();
			Long t118;
			t118=8;
			Long t119;
			t119=lvl__id.get();
			Long t120;
			t120=Var<Long>(ctx,veExt1).get();
			c.f.fLine=99;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,170).cv(),nullptr,t120.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t119.cv(),lvl__id.cv(),(CV*)9,t118.cv(),nullptr,(CV*)9,t117.cv(),lvl__groupid.cv(),(CV*)9,t116.cv(),nullptr,(CV*)33},5)) goto _0;
			g->Check(ctx);
		}
_8:
		lj=1;
		{
			Long t121;
			c.f.fLine=103;
			if (g->Call(ctx,(PCV[]){t121.cv(),li.cv()},1,255)) goto _0;
			g->Check(ctx);
			v2=t121.get();
		}
		goto _9;
_10:
		{
			Bool t122;
			c.f.fLine=105;
			if (g->Call(ctx,(PCV[]){t122.cv(),li.cv(),lj.cv()},2,1000)) goto _0;
			g->Check(ctx);
			if (!(t122.get())) goto _11;
		}
		{
			Txt t123;
			c.f.fLine=106;
			if (g->Call(ctx,(PCV[]){t123.cv(),li.cv(),lj.cv()},2,257)) goto _0;
			g->Check(ctx);
			Txt t124;
			g->AddString(t123.get(),K__caption.get(),t124.get());
			Long t125;
			t125=lj.get();
			Long t126;
			t126=li.get();
			Long t127;
			t127=Var<Long>(ctx,veExt1).get();
			Long t128;
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,165).cv(),t128.cv(),t127.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t126.cv(),li.cv(),(CV*)9,t125.cv(),lj.cv(),(CV*)9,t124.cv(),nullptr,(CV*)33},4)) goto _0;
			lvl__id=t128.get();
		}
		{
			Txt t129;
			c.f.fLine=107;
			if (g->Call(ctx,(PCV[]){t129.cv(),li.cv(),lj.cv()},2,257)) goto _0;
			g->Check(ctx);
			Txt t130;
			g->AddString(KDescription_20of_20.get(),t129.get(),t130.get());
			Txt t131;
			g->AddString(t130.get(),K__caption.get(),t131.get());
			Long t132;
			t132=0;
			Long t133;
			t133=6;
			Long t134;
			t134=lvl__id.get();
			Long t135;
			t135=Var<Long>(ctx,veExt1).get();
			if (g->CallPlugin(ctx,(PCV[]){Ref(1,170).cv(),nullptr,t135.cv(),Var<Long>(ctx,veExt1).cv(),(CV*)9,t134.cv(),lvl__id.cv(),(CV*)9,t133.cv(),nullptr,(CV*)9,t132.cv(),nullptr,(CV*)9,t131.cv(),nullptr,(CV*)33},5)) goto _0;
		}
_11:
		lj=lj.get()+1;
_9:
		if (lj.get()<=v2.get()) goto _10;
_7:
		li=li.get()+1;
_5:
		if (li.get()<=v0.get()) goto _6;
		{
			Ref t140;
			t140.setLocalRef(ctx,lvx__blob.cv());
			c.f.fLine=117;
			if (g->Call(ctx,(PCV[]){nullptr,t140.cv(),Long(0).cv()},2,606)) goto _0;
		}
_4:
		{
			Long t141;
			t141=0;
			Long t142;
			t142=Var<Long>(ctx,veExt1).get();
			Txt t143;
			t143=Kvl__palette.get();
			c.f.fLine=124;
			proc_HMREP__PALETTE__INSTALL(glob,ctx,2,3,(PCV[]){t143.cv(),t142.cv(),t141.cv()},nullptr);
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
		}
		goto _2;
_3:
		{
			Long t144;
			c.f.fLine=126;
			if (g->Call(ctx,(PCV[]){t144.cv()},0,388)) goto _0;
			g->Check(ctx);
			if (22!=t144.get()) goto _12;
		}
		c.f.fLine=127;
		if (g->Call(ctx,(PCV[]){nullptr},0,270)) goto _0;
		g->Check(ctx);
		goto _2;
_12:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
