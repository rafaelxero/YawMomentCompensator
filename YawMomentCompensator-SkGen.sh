#!/bin/sh

rtc-template -bcxx \
--module-name=YawMomentCompensator --module-desc="Yaw Moment Compensator component" \
--module-version=0.1 --module-vendor=AIST --module-category=example  \
--module-comp-type=DataFlowComponent --module-act-type=SPORADIC  \
--module-max-inst=1  \
--inport=qRef:TimedDoubleSeq  \
--inport=basePos:TimedPoint3D --inport=baseRpy:TimedOrientation3D  \
--inport=forceR:TimedDoubleSeq --inport=forceL:TimedDoubleSeq  \
--outport=qMod:TimedDoubleSeq --outport=tauZ:TimedDoubleSeq  \
--outport=zmp:TimedPoint3D  
